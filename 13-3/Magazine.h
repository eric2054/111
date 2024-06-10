#ifndef MAGAZINE_H
#define MAGAZINE_H
#include <string>
using namespace std;
#include "Publication.h"

class Magazine : public Publication {
private:
    int issueCount;
    int volumeCount;
public:
    Magazine();
    Magazine(string title, double pricePerPage, int issueCount, int volumeCount);
    void setIssueCount(int issueCount);
    int getIssueCount()const;
    void setVolumeCount(int volumeCount);
    int getVolumeCount()const;
    double getPrice()const;
    double getTotalPageCount()const;
};

#endif