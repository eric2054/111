#include "Publication.h"
#include <string>
using namespace std;
Publication::Publication() {
    title = " ";
    pricePerPage = 0.0;
}
Publication::Publication(string title, double pricePerPage) {
    this->title = title;
    this->pricePerPage = pricePerPage;
}
void Publication::setTitle(string title) {
    this->title = title;
}
string Publication::getTitle()const {
    return title;
}
void Publication::setPricePerPage(double pricePerPage) {
    this->pricePerPage = pricePerPage;
}
double Publication::getPricePerPage()const {
    return pricePerPage;
}
