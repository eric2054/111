//Cylinder.h
#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {
private:
    double radius;
    double height;    
public:
    Cylinder();
    void setRadius(double radius);
    double getRadius() const;
    void setHeight(double height);
    double getHeight() const;
    double getVolume() const;
};

#endif

//Cylinder.cpp

#include "Cylinder.h"
#include <cmath>

const double PI = 3.14159265359;

Cylinder::Cylinder() {
    radius = 0;
    height = 0;
}

void Cylinder::setRadius(double radius) {
    this->radius =  radius;
}

double Cylinder::getRadius() const {
    return radius;
}

void Cylinder::setHeight(double height) {
    this->height = height;
}

double Cylinder::getHeight() const {
    return height;
}

double Cylinder::getVolume() const {
    return PI * radius * radius * height;
}

//main.cpp

#include <iostream>
#include <iomanip>
#include "Cylinder.h"
using namespace std;

void sortByBubble(Cylinder cylinderIn[], Cylinder cylinderOut[], int size){
    for (int i = 0; i < size; i++) {
        cylinderOut[i] = cylinderIn[i];
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (cylinderOut[j].getVolume() > cylinderOut[j + 1].getVolume()) {
                Cylinder temp = cylinderOut[j];
                cylinderOut[j] = cylinderOut[j + 1];
                cylinderOut[j + 1] = temp;
            }
        }
    }
}

int main() {
    Cylinder cylinderIn[10];
    Cylinder cylinderOut[10];
    for (int i = 0; i < 10; i++) {
        double r, h;
        cin >> r >> h;
        cylinderIn[i].setRadius(r);
        cylinderIn[i].setHeight(h);
    }
    cout << "----- Original Array -----" << endl;
    for (int i = 0; i < 10; i++) {
        cout << fixed << setprecision(2) << cylinderIn[i].getVolume() << endl;
    }
    sortByBubble(cylinderIn, cylinderOut, 10);
    cout << "----- Sorted Array -----" << endl;
    for (int i = 0; i < 10; i++) {
        cout << fixed << setprecision(2) << cylinderOut[i].getVolume() << endl;
    }
    return 0;
}