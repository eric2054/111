
#ifndef BOOK_H
#define BOOK_H

#include "Publication.h"
#include <string>
using namespace std;
class Book :public Publication {
private:
    int pageCount;
    double discount;
public:
    Book();
    Book(string title, double pricePerPage, int pageCount, double discount);
    void setPageCount(int pageCount);
    int getPageCount()const;
    void setDiscount(double discount);
    double getDiscount()const;

    double getPrice()const;
    double getTotalPageCount()const;
};

#endif