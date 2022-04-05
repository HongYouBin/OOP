#include <iostream>
using namespace std;

class Transportation{
    private:
        char companyName[10];
        int num;
    public:
        Transportation(const char* companyName, int num);
        char* getCompanyName();
        virtual int getFare() = 0;
};

class TransportaionList{
    private:
        Transportation* tp[50];
        int numTp;

    public:
        void addTransportaion(Transportation* newTp){
            tp[numTp++]= newTp;
        }

        int getTotalFare(){
            int fare =0;
            for(int i=0;i<numTp;++i) fare+=tp[i]->getFare();
            return fare;
        }
};


class Taxi : public Transportation
{
    private:
        int totalDistance;
    public:
        Taxi(const char* companyName, int totalDistance);
        virtual int getFare() const;//총 운행거리와 단위거리 당 요금의 곱 반환
};

class Bus : public Transportation
{
    private:
        int numBoarding;
    public:
        Bus(const char* companyName, int numBoarding);
        virtual int getFare() const;//탑승회수와 기본요금의 곱 반환
};

class CradeitCard{
    public:
        int getTotalFare(Transportation** ptrTP, int num){
            int total = 0;
           for(int i=0;i<num;++i)total+=ptrTP[i]->getFare();
           return total;
        }
};
