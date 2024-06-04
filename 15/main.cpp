#include <iostream>
#include "Ball.h"
#include "Cube.h"
#include<iomanip>
using namespace std;

int main() {
    double radius, length;
    string color;
    
    cin>>radius>>color;
    Ball ball(radius, color);

    cin>>length>>color;
    Cube cube(length, color);
  
    cout <<"Ball"<<endl;
    cout<<fixed<<setprecision(1)<<"radius:"<<ball.getRadius()<<", "<<"area:"<<ball.getArea()<<", "<<"volume:"<<ball.getVolume()<<", "<<"color:"<<ball.getColor()<<endl;
    
    cout << "Cube"<<endl;
    cout<<fixed<<setprecision(1)<<"length:"<<cube.getLength()<<", "<<"area:"<<cube.getArea()<<", "<< "volume:" <<cube.getVolume()<<", "<<"color:"<<cube.getColor()<<endl;
}
