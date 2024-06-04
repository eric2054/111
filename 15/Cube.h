#ifndef CUBE_H
#define CUBE_H

#include "GeometricObject.h"

class Cube : public GeometricObject {
private:
    double length;

public:
    Cube();
    Cube(double length, string color);
    void setLength(double length);
    double getLength() const;
    double getVolume() const;
    double getArea() const;
};

#endif
