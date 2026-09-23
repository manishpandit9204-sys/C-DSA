#include<iostream>
using namespace std;

// class Student{
//     public:
//  string name;
//  int roll_number,age;
//  string grade;
// };

// int main(){
//   Student S1;
//   S1.name = "Manish";
//   S1.age = 20;
//   S1.roll_number = 34567;
//   S1.grade = "C+";
//   cout<<S1.name<<endl;

//   Student S2;
//   S2.name = "Sunil";
//   S2.age = 25;
//   S2.roll_number = 3457;
//   S2.grade = "A+";
//   cout<<S2.roll_number<<endl;
// }
/// Agr ese hum aise hi chod de toh koi bhi aake mere data ko access kar skta hai kyuki yeh public hai 




//  Q- hum iska use kyu karte hai jabki yeh sb hum sring aur array ki help se bhi easily store kar  skte hai
// Ans- kyuki hum iske  apne accoring kuch bhi message ya modify kar skte haai like example jaise fill karna hai student name aur usne chod diya toh waha toh bas aise hi chhut jayega na toh waha hum ek apne usubility ke liye condition ya kuch bhi de skte hai

class Student{
    private:
    string name;
    int age,roll_number;
    string grade;

    public:
    void setname(string s)
    {
        if(s.size()==0){
            cout<<"Invalid Name !!";
        }
        name = s;
    }
    void setage(int n)
    {
        age=n;

    }
    void setroll_number(int r)
    {
        roll_number = r;
    }
    void setgrade(string g)
    {
        grade = g;
    }

    void getname()
    {
        cout<<name<<endl;
    }
    void getage()
    {
        cout<<age<<endl;
    }
    void getroll_number()
    {
        cout<<roll_number<<endl;
    }
    void getgrade()
    {
        cout<<grade<<endl;
    }


};


int main(){
    Student S1;
    S1.setname("Manish");
    S1.setage(21);
    S1.setroll_number(543);
    S1.setgrade("B+");

    S1.getname();
    S1.getage();
    S1.getroll_number();
    S1.getgrade();
}