#include<iostream>
using namespace std;
int main()
{


//    ARRAY METHOD

// char arr[]={'a','p','p','l','e'};
// //cout<<arr;
// for(int i=0;i<5;i++){
//     cout<<arr[i];
// }

// char arr[10];
// cin>>arr;
// arr[2]='\0';//null character ke bad value print nahi hoti hai waha se value terminate ho jati hai
// cout<<arr;


//          STRING METHOD


  // Direct Method
//   string  m="Manish ";
//   cout<<m;

// User defined
//   string m ;
// cin>>m;
// cout<<m;

//length

// string z="Manish Prajapati";
// cout<<z.size();

//combine of String
//  string s1="Manish";
//  string s2="Kumar";
// //  string s3= s1+s2;
// string s3=s1.append(s2);
//  cout<<s3;

// when i want to spce in string then use get function

//  string y;
 
//  getline(cin,y);
//  cout<<y;
//  cout<<endl;
//  cout<<y.size();


// Add in string 
//string s1="Manish",s2="sunil";
//s1.push_back('k');// add
//s1.pop_back();// remove
// s1=s1+"k";// add
// cout<<s1;

// escape charcter

// string s= "Kavya is a \"beautiful\" girl";
// cout<<s;

// reverse the string

// string s="Manish";
// int start=0,end= s.size()-1;
// while(start<end){
//     swap(s[start],s[end]);
//     start++;
//     end--;
// }
// cout<<s;
// cout<<endl;

// // length of string 

// int size=0;
// while(s[size]!= '\0'){
//     size++;
// }
// cout<<size;


  // palindrome in string


  string k="manish";
  int start=0,end=k.size()-1;
  while(start<end){
    if(k[start]!=k[end]){
        cout<<"Not a Palindrome";
        return 0;
    }
     start++;
     end--;

  }
  cout<<"It is Palindrome";

} 