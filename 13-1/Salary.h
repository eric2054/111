#ifndef SALARY_H
#define SALARY_H

#include <string>
#include <fstream>
using namespace std;

class Salary
{
private:
    string name;
    int money;
    int hours;
    int workDay;

public:
    Salary();
    Salary(string name, int money, int hours, int workDay);
    void setName(string n);
    void setMoney(int m);
    void setHours(int h);
    void setworkDay(int w);
    string getName() const;
    int getMoney() const;
    int getHours() const;
    int getworkDay() const;
    int getSalary() const;
    void writeToFile();
    void readFromFile(Salary* s, int& n);
};
#endif