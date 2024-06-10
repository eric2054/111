#ifndef PUBLICATION_H
#define PUBLICATION_H
#include<string>
using namespace std;
class Publication {
private:
    string title;
    double pricePerPage;
public:
    Publication();
    Publication(string title, double pricePerPage);
    void setTitle(string title);
    string getTitle()const;
    void setPricePerPage(double pricePerPage);
    double getPricePerPage()const;
};
#endif