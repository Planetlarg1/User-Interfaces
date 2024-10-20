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
    if (index < 0 || index >= size()) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

Quake QuakeDataset::strongest() const {
    return Quake("2024-01-01T00:00:00Z", 0.0, 0.0, 0.0, 0.0);
}

Quake QuakeDataset::shallowest() const {
    return Quake("2024-01-01T00:00:00Z", 0.0, 0.0, 0.0, 0.0);
}

double QuakeDataset::meanDepth() const {
    return 0.0;
}

double QuakeDataset::meanMagnitude() const {
    return 0.0;
}