#include<iostream>
using namespace std;


// without constructor
//  class Car{
//     public:
//     string car_name;
//     int price;
//     int carsheet;
//      string car_type;

//  };

//  void print(Car c){
//     cout<<c.car_name<<" "<<c.price<<" "<<c.carsheet<<" "<<c.car_type<<endl;
//  }
// int main(){

// Car c1;
// c1.car_name="Thar";
// c1.price=1600000;
// c1.carsheet=5;
// c1.car_type="Suv";

// Car c2;
// c2.car_name="Scorpio";
// c2.price=1600000;
// c2.carsheet=7;
// c2.car_type="Suv";

// Car c3;
// c3.car_name="BMW M4";
// c3.price=20000000;
// c3.carsheet=4;
// c3.car_type="Race Car";

// Car c4;
// c4.car_name="Rolls Royce";
// c4.price=80000000;
// c4.carsheet=4;
// c4.car_type="Luxary";


// print(c1);
// print(c2);
// print(c3);
// print(c4);
 
// }




// class Car{
//     public:
//     string car_name;
//     int price;
//     int carsheet;
//      string car_type;

//      Car(string name,int rate,int sheet,string type){
//         car_name=name;
//         price= rate;
//         carsheet=sheet;
//         car_type= type;
//      }

//  };

//  void print(Car c){
//     cout<<c.car_name<<" "<<c.price<<" "<<c.carsheet<<" "<<c.car_type<<endl;
//  }
// int main(){

// Car c1("Fronx",700000,5,"Middle Class");

// Car c2("Scorpio",1600000,7,"Mafia Choice");

// Car c3("BMW M4", 30000000,4,"Race Car");

// Car c4("Thar",1600000,5,"Suv");


// print(c1);
// print(c2);
// print(c3);
// print(c4);
 
// }



// when we use same keyword / variable of constructor and class then this is directly not work
// for the  working we  are using this keyword


 class Cricketers{
    public:
    string name;
    int runs;

    // Constructor

    Cricketers(string name,int runs){
        this->name=name;
        this->runs= runs;

    }
 };

int  main(){
   
     Cricketers c1("MS Dhoni",13000);
     Cricketers c2("Rohit Sharma",18000);

    
     cout<<c1.name<<" "<<c1.runs<<endl;
     cout<<c1.name<<" "<<c1.runs<<endl;
}