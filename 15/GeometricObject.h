#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H

#include <string>
using namespace std;

class GeometricObject {
private:
    string color;

public:
    GeometricObject();
    GeometricObject(string color);
    void setColor(string color);
    string getColor() const;
};

#endif 
