//main.cpp
#include <iostream>
#include <fstream>
#include <string>
#include "Salary.h"
using namespace std;

int main() {
    Salary s[6];
    string name;
    int money, hours, workDay;
    ifstream inFile("Salary.txt", ios::in);
    for (int i = 0; i < 6; i++) {
        inFile >> name >> money >> hours >> workDay;
        s[i].setName(name);
        s[i].setMoney(money);
        s[i].setHours(hours);
        s[i].setworkDay(workDay);
    }
    inFile.close();
    for (int i = 0; i < 6; i++) {
        cout << s[i].getName() << " " << s[i].getSalary() << endl;
    }
    return 0;
}

//Salary.h
#include <string>
using namespace std;

class Salary {
public:
    Salary();
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
private:
    string name;
    int money;
    int hours;
    int workDay;
};

//Salary.cpp
#include <iostream>
#include <fstream>
#include <string>
#include "Salary.h"
using namespace std;

Salary::Salary() {
    name = "";
    money = 0;
    hours = 0;
    workDay = 0;
}

void Salary::setName(string n) {
    name = n;
}

void Salary::setMoney(int m) {
    money = m;
}

void Salary::setHours(int h) {
    hours = h;
}

void Salary::setworkDay(int w) {
    workDay = w;
}

string Salary::getName() {
    return name;
}

int Salary::getMoney() {
    return money;
}

int Salary::getHours() {
    return hours;
}

int Salary::getworkDay() {
    return workDay;
}

int Salary::getSalary() {
    return money * hours * workDay;
}

void Salary::readFromFile() {
    ifstream inFile("Salary.txt", ios::in);
    for (int i = 0; i < 6; i++) {
        inFile >> name >> money >> hours >> workDay;
    }
    inFile.close();
}

void Salary::writeToFile() {
    ofstream outFile("Salary.txt", ios::out);
    for (int i = 0; i < 6; i++) {
        outFile << name << " " << money << " " << hours << " " << workDay << endl;
    }
    outFile.close();
}
