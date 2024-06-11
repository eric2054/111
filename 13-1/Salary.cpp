#include "Salary.h"

Salary::Salary()
{
    name = "";
    money = 0;
    hours = 0;
    workDay = 0;
}

Salary::Salary(string name, int money, int hours, int workDay)
{
    this->name = name;
    this->money = money;
    this->hours = hours;
    this->workDay = workDay;
}

void Salary::setName(string n)
{
    name = n;
}

void Salary::setMoney(int m)
{
    money = m;
}

void Salary::setHours(int h)
{
    hours = h;
}

void Salary::setworkDay(int w)
{
    workDay = w;
}

string Salary::getName() const
{
    return name;
}

int Salary::getMoney() const
{
    return money;
}

int Salary::getHours() const
{
    return hours;
}

int Salary::getworkDay() const
{
    return workDay;
}

int Salary::getSalary() const
{
    return money * hours * workDay;
}

void Salary::writeToFile()
{
    ofstream file("salary.txt");
    file << "Baia 199 5 3" << endl;
    file << "Evan 220 5 8" << endl;
    file << "Charlie 204 6 3" << endl;
    file << "Duet 266 3 6" << endl;
    file << "Kimora 193 5 2" << endl;
    file << "Chaviva 210 5 4" << endl;
    file.close();
}

void Salary::readFromFile(Salary* s, int& n)
{
    ifstream file("salary.txt");
    string name;
    int money, hours, workDay;
    while (file >> name >> money >> hours >> workDay)
    {
        s[n] = Salary(name, money, hours, workDay);
        n++;
    }
    file.close();
}