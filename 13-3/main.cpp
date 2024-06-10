#include <iostream>
#include <iomanip>
#include "Book.h"
#include "Magazine.h"
#include <string>
using namespace std;

int main() {
    string title;
    double pricePerPage;
    int pageCount;
    double discount;
    int issueCount;
    int volumeCount;

    cin >> title >> pricePerPage >> pageCount >> discount;
    Book book(title, pricePerPage, pageCount, discount);

    cin >> title >> pricePerPage >> issueCount >> volumeCount;
    Magazine m(title, pricePerPage, issueCount, volumeCount);

    cout << "Book title: " << book.getTitle() << " -> page:" << book.getPageCount() << " price: " << fixed << setprecision(1) << book.getPrice() << endl;
    cout << "Magazine title: " << m.getTitle() << " -> page:" << fixed << setprecision(0) <<m.getTotalPageCount() << " price: " << fixed << setprecision(1) << m.getPrice();
}
