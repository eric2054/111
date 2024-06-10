#include "Publication.h"
#include <string>
#include "Book.h"
using namespace std;

Book::Book() {
    pageCount = 0;
    discount = 0;
}
Book::Book(string title, double pricePerPage, int pageCount, double discount) : Publication(title, pricePerPage) {

    this->pageCount = pageCount;
    this->discount = discount;
}
void Book::setPageCount(int pageCount) {
    this->pageCount = pageCount;
}
int Book::getPageCount()const {
    return pageCount;
}
void Book::setDiscount(double discount) {
    this->discount = discount;
}
double Book::getDiscount()const {
    return discount;
}

double Book::getPrice()const {
    return getPricePerPage() * pageCount * discount;
}
double Book::getTotalPageCount()const {
    return getPricePerPage();
}