//main.cpp
#include <iostream>
#include <fstream>
#include <string>
#include "Salary.h"
using namespace std;

int main(){
    Salary s[6];
    s[0]=Salary("Baia", 199, 5, 3);
    s[1]=Salary("Evan", 220, 5, 8);
    s[2]=Salary("Charlie", 204, 6, 3);
    s[3]=Salary("Duet", 266, 3, 6);
    s[4]=Salary("Kimora", 193, 5, 2);
    s[5]=Salary("Chaviva", 210, 5, 4);

    for(int i=0; i<6; i++){
        s[i].writeToFile();
    }
    for(int i=0; i<6; i++){
        s[i].readFromFile();
    }
     
    for(int i=0; i<6; i++){
        cout<<s[i].getName()<<" "<<s[i].getSalary()<<endl;
    }
    return 0;
}
//Salary.h
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Salary{
    private:
        string name;
        int money;
        int hours;
        int workDay;
    public:
        Salary();
        Salary(string, int, int, int);
        void setName(string);
        void setMoney(int);
        void setHours(int);
        void setworkDay(int);
        string getName();
        int getMoney();
        int getHours();
        int getworkDay();
        int getSalary();
        void readFromFile();
        void writeToFile();
};

//Salary.cpp
#include <iostream>
#include <fstream>
#include <string>
#include "Salary.h"
using namespace std;

Salary::Salary(){
    name="";
    money=0;
    hours=0;
    workDay=0;
}

Salary::Salary(string n, int m, int h, int w){
    name=n;
    money=m;
    hours=h;
    workDay=w;
}

void Salary::setName(string n){
    name=n;
}

void Salary::setMoney(int m){
    money=m;
}

void Salary::setHours(int h){
    hours=h;
}

void Salary::setworkDay(int w){
    workDay=w;
}

string Salary::getName(){
    return name;
}

int Salary::getMoney(){
    return money;
}

int Salary::getHours(){
    return hours;
}

int Salary::getworkDay(){
    return workDay;
}

int Salary::getSalary(){
    return money*hours*workDay;
}

void Salary::readFromFile(){
    ifstream file;
    file.open("Salary.txt");
    if(file.is_open()){
        while(!file.eof()){
            file>>name>>money>>hours>>workDay;
        }
    }
    file.close();
}

void Salary::writeToFile(){
    ofstream file;
    file.open("Salary.txt");
    file<<name<<", "<<money<<", "<<hours<<", "<<workDay<<endl;
    file.close();
}
