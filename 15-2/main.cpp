#include <iostream>
#include "Ball.h"
#include "Cube.h"
#include "GeometricObject.h"
#include<iomanip>
using namespace std;

void display(GeometricObject &dis){
    cout<<fixed<<setprecision(1)<<"area:"<<dis.getArea()<<", "<<"volume:"<<dis.getVolume()<<", "<<"color:"<<dis.getColor()<<endl;
}


int main() {
    double radius, length;
    string color;
    
    cin>>radius>>color;
    Ball ball(radius, color);

    
    cin>>length>>color;
    Cube cube(length, color);

    
    cout <<"Ball"<<endl;
    cout<<fixed<<setprecision(1)<<"radius:"<<ball.getRadius()<<", ";
    display(ball);
    
    cout << "Cube"<<endl;
    cout<<fixed<<setprecision(1)<<"length:"<<cube.getLength()<<", ";
    display(cube);
}
