class Transportation{
    private:
        char companyName[10];
        int num;
    public:
        Transportation(const char* companyName, int num);
        virtual char* getCompanyName() = 0;
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
        char companyName[10];
        int totalDistance;
    public:
        Taxi(const char* companyName, int totalDistance);
        virtual char* getComanyName() const; 
        virtual int getFare() const;//총 운행거리와 단위거리 당 요금의 곱 반환
};

class Bus : public Transportation
{
    private:
        char companyName[10];
        int numBoarding;
    public:
        Bus(const char* companyName, int numBoarding);
        virtual char* getCompanyName() const; 
        virtual int getFare() const;//탑승회수와 기본요금의 곱 반환
};