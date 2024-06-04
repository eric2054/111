#include "Cube.h"
#include <cmath>
Cube::Cube() {
    length = 0; 
}

Cube::Cube(double length, string color) : GeometricObject(color) {
    this->length = length;
}

void Cube::setLength(double length) {
    this->length = length;
}

double Cube::getLength() const {
    return length;
}

double Cube::getVolume() const {
    return pow(length, 3);
}

double Cube::getArea() const {
    return 6 * pow(length,2);
}
