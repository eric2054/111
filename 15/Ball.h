#ifndef BALL_H
#define BALL_H

#include "GeometricObject.h"

class Ball : public GeometricObject {
private:
    double radius;

public:
    Ball();
    Ball(double radius, string color);
    void setRadius(double radius);
    double getRadius() const;
    double getVolume() const;
    double getArea() const;
};

#endif 
