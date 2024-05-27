//main
#include <iostream>
#include "Rectangle.h"
#include<iomanip>
using namespace std;
int main()
{
    double w1, w2, h1, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    Rectangle r1(w1, h1);
    Rectangle r2(w2, h2);


    cout << fixed << setprecision(2) << "SwapByReference:" << r1.getArea() << " " << r2.getArea() << " to ";
    r1.swapByReference(r2);

    cout << r1.getArea() << " " << r2.getArea() << endl;


    cout << fixed << setprecision(2) << "SwapByPointer:" << r1.getArea() << " " << r2.getArea() << " to ";
    r1.swapByPointer(&r2);
    cout << r1.getArea() << " " << r2.getArea() << endl;

}

//Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
	double width;
	double height;

public:
	Rectangle(double w, double h);
	void setWidth(double w);
	double getWidth() const;
	void setHeight(double h);
	double getHeight() const;
	double getArea() const;
	void swapByReference(Rectangle& r2);
	void swapByPointer(Rectangle* r2);
};
#endif

//Rectangle.cpp
#include<iostream>
#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}

void Rectangle::setWidth(double w) {
    width = w;
}
double Rectangle::getWidth()const {
    return width;
}

void Rectangle::setHeight(double h) {
    height = h;
}
double Rectangle::getHeight()const {
    return height;
}

double Rectangle::getArea()const {
    return width * height;
}

void Rectangle::swapByReference(Rectangle& r2) {
    Rectangle temp = *this;
    *this = r2;
    r2 = temp;
}

void Rectangle::swapByPointer(Rectangle* r2) {

    Rectangle temp = *this;
    *this = *r2;
    *r2 = temp;
}
