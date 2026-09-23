#include <iostream> 
 using namespace std;
 bool palindrome(int num){
    if(num < 0){
        return false;
    }
     int  x = num;
     int rev = 0;
      while(num > 0){
        int digit = num % 10;
        rev = rev *10 +  digit;
         num= num/10;
      }
       if (x== rev){
        return true;
       }
       return false;
 }
 int main(){
    int num ;
    cout<<"Enter a Number : ";
    cin>> num;
if(palindrome(num)){
    cout<<num<<" "<<" is palindrome";
}
else{
    cout<<num<<" "<<" is not Palindrome";
}
 }