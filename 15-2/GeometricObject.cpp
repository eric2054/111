#include "GeometricObject.h"

GeometricObject::GeometricObject() {
    color = " ";
}

GeometricObject::GeometricObject(string color) {
    this->color = color;
}

void GeometricObject::setColor(string color) {
    this->color = color;
}

string GeometricObject::getColor() const {
    return color;
}
