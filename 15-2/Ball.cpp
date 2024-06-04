#include "Ball.h"
#include <cmath>

Ball::Ball() {
    radius = 0; 
}

Ball::Ball(double radius, string color) : GeometricObject(color) {
    this->radius = radius;
}

void Ball::setRadius(double radius) {
    this->radius = radius;
}

double Ball::getRadius() const {
    return radius;
}

double Ball::getVolume() const {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

double Ball::getArea() const {
    return 4.0 * M_PI * pow(radius, 2);
}
