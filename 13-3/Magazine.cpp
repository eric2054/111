#include "Publication.h"
#include "Magazine.h"
#include <string>
using namespace std;

    Magazine::Magazine(){
        issueCount=0;
        volumeCount=0;
    }
    Magazine::Magazine(string title,double pricePerPage,int issueCount,int volumeCount) : Publication(title,pricePerPage){
        this->issueCount=issueCount;
		this->volumeCount=volumeCount;
        
    }
    void Magazine::setIssueCount(int issueCount){
        this->issueCount=issueCount;
    }
    int Magazine::getIssueCount()const{
        return issueCount;
    }
    void Magazine::setVolumeCount(int volumeCount){
        this->volumeCount=volumeCount;
    }
    int Magazine::getVolumeCount()const{
        return volumeCount;
    }
    double Magazine::getPrice()const{
        return getPricePerPage() *issueCount*volumeCount;
    }
    double Magazine::getTotalPageCount()const{
        return issueCount*volumeCount;
    }
