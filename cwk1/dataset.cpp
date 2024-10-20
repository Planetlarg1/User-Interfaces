// COMP2811 Coursework 1: QuakeDataset class

#include <stdexcept>
#include "dataset.hpp"
#include <fstream>
#include <sstream>

void QuakeDataset::loadData(const std::string& filename) {
    // Pass
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