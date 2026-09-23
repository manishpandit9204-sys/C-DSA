#include<iostream>
using namespace std;
int main(){
     class Scooty{  // PARENT CLASS
        public:
        int topSpeed;
        float mileage;
     };

     class Bike:public Scooty{ // CHILD CLASS / DERIVED CLASS
        public:
        int gears;
     };


     // MULTI- LEVEL INHERITANCE

     class Vehicle{

        int topspeed;
        float mileage;
        string fuel;

     };

     class TwoWheeler: public Vehicle{
        public:
     };

     class FourWheeler: public Vehicle{
        public:
     };

     class Scooty:public TwoWheeler{
        public:
     };

     class Bike:public TwoWheeler{
        public:
     };





//  MULTIPLE INHERITANCE



     class Engine {
public:
    int horsepower;
};

class MusicSystem {
public:
    int speakers;
};

class Car : public Engine, public MusicSystem {
public:
};