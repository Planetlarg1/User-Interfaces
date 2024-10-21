// COMP2811 Coursework 1: QuakeDataset class

#include <stdexcept>
#include "dataset.hpp"
#include "csv.hpp"

void QuakeDataset::loadData(const std::string& filename) {
    // Generate reader for data file
    csv::CSVReader reader(filename);
    // Iterate through data file
    for (auto& row : reader){
        // Temprorarily store each value from row
        std::string time = row["time"].get<std::string>();
        double latitude = row["latitude"].get<double>();
        double longitude = row["longitude"].get<double>();
        double depth = row["depth"].get<double>();
        double magnitude = row["mag"].get<double>();
            
        // Add values from row as Quake entry into data vector
        data.emplace_back(time, latitude, longitude, depth, magnitude);
    }
}

Quake QuakeDataset::operator[](int index) const {
    // Check if indexing is within size of dataset
    if (index < 0 || index >= size()) {
        throw std::out_of_range("Indexing error: Index out of range");
    }
    return data[index];
}

Quake QuakeDataset::strongest() const {
    // Check if dataset exists
    if (data.empty()) {
        throw std::runtime_error("Invalid dataset: Cannot return strongest quake in an empty dataset");
    }

    size_t maxIndex = 0;
    double currentMag;
    double maxMag = data[0].getMagnitude();

    // Iterate through, comparing for highest magnitude
    for (size_t i=1; i<data.size(); i++) {
        currentMag = data[i].getMagnitude();
        if (currentMag > maxMag) {
            maxIndex = i;
            maxMag = currentMag;
        }
    }
    return data[maxIndex];
}

Quake QuakeDataset::shallowest() const {
    // Check if dataset exists
    if (data.empty()) {
        throw std::runtime_error("Invalid dataset: Cannot return shallowest quake in an empty dataset");
    }

    size_t minIndex = 0;
    double currentDepth;
    double minDepth = data[0].getDepth();

    // Iterate through, comparing for lowest depth
    for (size_t i=1; i<data.size(); i++) {
        currentDepth = data[i].getDepth();
        if (currentDepth < minDepth) {
            minIndex = i;
            minDepth = currentDepth;
        }
    }
    return data[minIndex];
}

double QuakeDataset::meanDepth() const {
    // Check if dataset exists
    if (data.empty()) {
        throw std::runtime_error("Invalid dataset: Cannot return mean depth in an empty dataset");
    }

    double totalDepth = 0;

    // Calculate total depth
    for (const auto& quake : data) {
        totalDepth += quake.getDepth();
    }

    // Mean = sum / size
    return totalDepth / data.size();
}

double QuakeDataset::meanMagnitude() const {
    // Check if dataset exists
    if (data.empty()) {
        throw std::runtime_error("Invalid dataset: Cannot return mean magnitude in an empty dataset");
    }

    double totalMag = 0;

    // Calculate total depth
    for (const auto& quake : data) {
        totalMag += quake.getMagnitude();
    }

    // Mean = sum / size
    return totalMag / data.size();
}