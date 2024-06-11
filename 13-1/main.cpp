#include <iostream>
#include "Salary.h"
using namespace std;

int main()
{
    Salary s[6];
    int n = 0;
    s->writeToFile();
    s->readFromFile(s, n);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].getName() << " " << s[i].getSalary() << endl;
    }
    return 0;
}
