// COMP2811 Coursework 1: quaketool application

// / / / / / / / / / / / / / / / / / / / / / / / / / / / / //
// D E F I N I T E L Y   W R O N G   B U T   O H   W E L L //
// / / / / / / / / / / / / / / / / / / / / / / / / / / / / //

#include <iostream>
#include "quake.hpp"
#include "dataset.hpp"
#include "argparse.hpp"
#include "tabulate.hpp"

int main(int argc, char* argv[])
{
  // Initialise arg parser
  argparse::ArgumentParser program("quaketool");

  // Define command line arguments
  program.add_argument("filename")
    .help("the name of the CSV file to load");

  program.add_argument("--table")
    .help("display quakes in table mode", 0)
    .default_value(false)
    .implicit_value(true);

  program.add_argument("--threshold")
    .help("minimum magnitude threshold for table display")
    .default_value(0.0)
    .action([](const std::string& s) { return std::stod(s); });

  program.add_argument("--help")
    .help("display this help message", 0)
    .default_value(false)
    .implicit_value(true);

  // Parse arguments
  try {
    program.parse_args(argc, argv);
  } catch (const std::runtime_error& err) {
    std::cerr << err.what() << std::endl;
    return 1;
  }

  // Load data
  QuakeDataset dataset(program.get<std::string>("filename"));

  // Display stats
  std::cout << "Number of quakes read from file: " << dataset.size() << std::endl;
  std::cout << "Strongest quake:\n" << dataset.strongest();
  std::cout << "Shallowest quake:\n" << dataset.shallowest();
  std::cout << "Mean depth of quakes: " << dataset.meanDepth() << " km" << std::endl;
  std::cout << "Mean magnitude of quakes: " << dataset.meanMagnitude() << std::endl;

  // Table mode
  if (program["--table"] == true) {
    tabulate::Table table;
    table.add_row({"Time", "Latitude", "Longitude", "Depth", "Magnitude"});

    double threshold = program.get<double>("--threshold");

    for (const auto& quake : dataset) {
      if (quake.getMagnitude() >= threshold) {
        table.add_row({quake.getTime(),
                        std::to_string(quake.getLatitude()),
                        std::to_string(quake.getLongitude()),
                        std::to_string(quake.getDepth()),
                        std::to_string(quake.getMagnitude())});
      }
    }
  }
  std::cout << table << std::endl;

  // Help option
  if (program["--help"] == true) {
  std::cout << program;
  return 0;
  }


  return 0;
}
