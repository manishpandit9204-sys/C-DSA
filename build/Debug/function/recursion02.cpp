#include<iostream>
#include<vector>
using namespace std;



// print 1 to  N
// Double Argument
// void print(int num , int N){
//     if(num==N){
//         cout<<num<<endl;
//         return;
//     }
//     cout<<num<<endl;
//     print(num+1,N);
// }
//  int main(){
//   int N;
//   cin>>N;
//   print(1,N);
//  }

// Single Argument
// void print(int N){
//     if(N==1){
//         cout<<1<<endl;
//         return;
//     }
//     print(N-1);// agr ise hum niche likhenge toh number reverse order me print honge
//     cout<<N<<endl;
    
// }
//  int main(){
//   int N;
//   cin>>N;
//   print(N);
//  }

// PRINT 1 TO N EVEN NUMBER
// Two Arguments
//  void printeven(int num, int N){
//     if(num==N){
//          cout<<num;
//          return;
//     }
//     cout<<num<<" ";
//     printeven(num+2,N);
//  }

//  int main(){
//  int N;
//  cin>>N;
//  if(N%2==1)
//  N--;
//  printeven(2,N);
//  }

// Single Arguments

// void printeven(int num, int N){
//     if(num>N){
//          cout<<num<<endl;
//          return;
//     }
//     cout<<num<<" ";
//     printeven(num+2,N);
//  }

//  int main(){
//  int N;
//  cin>>N;
//  if(N%2==1)
//  N--;
//  printeven(2,N);
//  }


// Factorial of any number 
// int fact(int n){
//      // Base case
//       if(n==0){
//           return 1;
//       }
//            return n*fact(n-1);
      
// }

//  int main(){
//      int n;
//      cin>>n;
//      if(n<0){
//           cout<<"Factorial is not possible\n";
//      }
//      cout<<fact(n);
//  }


/// Sum of N Natural number

//  int sum(int n){
//      if(n==1){
//         return 1;
//      }
//      return n + sum(n-1);
//  }

// int main(){
//      int n;
//      cin>>n;
//       cout<<sum(n)<<endl;
// }


// Power of 2
//  int pow(int num,int n){
//      if(n==0){
//           return 1;
//      }
//      return num*pow(num,n-1);
//  }
// int main(){
//      int n=5;
//      cout<<pow(2,n);
// }


// int sqrsum(int n){
//      if(n==1){
//           return 1;
//      }
//      return n*n + sqrsum(n-1);
//  }
// int main(){
//      int n=2;
//      cout<<sqrsum(n);
// }



//   Print Array
 
//  void print(int arr[],int index,int n){
//      if(index==n){
//           return;
//      }
//      print(arr,index+1,n);// reverse Order
//      cout<<arr[index]<<" ";
//      //print(arr,index+1,n);// Normal
//  }

//  int main(){
//      int arr[]={1,2,3,4,5};
//      print(arr,0,5);
//  }


// Sum of Array

// int sum(int arr[],int index,int n){
//      if(index==n){
//           return 0;
//      }
//      return arr[index]+ sum(arr,index+1,n);
// }
//  int main(){
//      int arr[]= {1,2,3,4,5};
//      cout<<sum(arr,0,5)<<endl;
//  }



// Check Palindrome
//  bool checkpalindrome(string str, int start,int end ){
//      if(start>=  end){
//           return 1;
//      }
//       if(str[start]!=str[end]){
//           return 0;
//       }
//       else{
//           return checkpalindrome(str, start+1,end-1);
//       }
//  }
// int main(){
//      string str= "mom";
//      cout<<checkpalindrome(str,0,2);
// }





// LINEAR SEARCH

// bool linearSearch(int arr[],int X, int index,int size){
//      if (index==size){
//         return 0;
//      }
//     if(arr[index]==X){
//         return 1;
//     }
//     return linearSearch(arr,X,index+1,size);
// }

//  int main(){
//     int arr[]= {9,8,7,6,5,4};
//     int X= 6;
//      cout<<linearSearch(arr,X,0,6)<<endl;
//  }

// BINARY SEARCH

//  bool binarySearch(int arr[],int key, int start, int end ){
//     if(start>end){
//         return 0;
//     }
//     int mid= start+(end-start)/2;
//     if(arr[mid]==key){
//         return 1;
//     }
//     else if(arr[mid]<key){
//         return binarySearch(arr,key, mid+1,end);
//     }
//     else{
//         return binarySearch(arr,key,start,mid-1);
//     }

//  }

// int main(){
//     int arr[]={10,20,33,55,77,88};
//     int key =87;
//   cout<<  binarySearch(arr,key,0,5)<<endl;
// }



// Quick sort

// int partition(int arr[],int start,int end){
//     int pos= start;
//     for(int i=start;i<=end;i++)
//     {
//          if(arr[i]<=arr[end]){
//             swap(arr[i],arr[pos]);
//             pos++;
//          }
//     }
//     return pos-1;
// }

// void quicksort(int arr[],int start,int end){
//     if(start>=end)
//     return;
//     int pivot= partition(arr,start,end);

//     //left side
//     quicksort(arr,start,pivot-1);
//     //right side

//     quicksort(arr,pivot,end);
// }
// int main(){
//     int arr[]={7,4,5,8,2,1,3,9,10,6};
//     quicksort(arr,0,9);
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
// }



/// print the  subsequence of the array


//   void subsequence(int arr[],int index,int n,vector<vector<int >> &ans,vector<int>temp){

//     if(index==n){
//         ans.push_back(temp);
//         return;
//     }
//     subsequence(arr,index+1,n,ans,temp);
//     temp.push_back(arr[index]);
//     subsequence(arr,index+1,n,ans,temp);
//  }
// int main(){
//      int arr[]={1,2,3};
//       vector<vector<int>>ans;
//       vector<int>temp;
//       subsequence(arr,0,3,ans,temp);
//       for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//              cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//       }
      

// }
 




   //      subset of String 

// void  subset(string s,int index,int size,vector<string>& ans, string temp){

//     if(index==size){
//         ans.push_back(temp);
//         return;
//     }
//     subset(s,index+1,size,ans,temp);
//     temp.push_back(s[index]);
//     subset(s,index+1,s.size(),ans,temp);
//  }
// int main(){
//      string  s= "abcd";
//       vector<string>ans;
//       string temp;
//       subset(s ,0,s.size(), ans,temp);
//       for(int i=0;i<ans.size();i++)
//         cout<<ans[i]<<endl;
      
      

// }





// Subset sum

// void  subset(int arr[] ,int index,int n, int sum,vector<int>& ans){

//     if(index==n){
//         ans.push_back(sum);
//         return;
//     }
//     // not included
//     subset(arr,index+1,n,sum,ans);
//    // included
//     subset(arr,index+1,n, sum+arr[index],ans);
//  }
// int main(){
//     int arr[]={1,2,3};
//       vector<int>ans;
      
//       subset(arr,0,3,0,ans);
//       for(int i=0;i<ans.size();i++)
//         cout<<ans[i]<<endl;
      
      

// }


// Perfect Sum

// int subset(int arr[],int index,int sum,int n){
//     if(index==n)
//         return sum==0;
    
//     return subset(arr,index+1,sum,n)+subset(arr,index+1,sum-arr[index],n);

// }
//  int main(){
//     int arr[]={2,5,6,1,2};
//     int sum=8;
//     cout<<subset(arr,0,sum,4)<<endl;
//  }


/// permutations 

//  void permut(int arr[],vector<vector<int>>&ans,vector<int>&temp,vector<bool>visit){
//      if(visit.size()==temp.size()){
//         ans.push_back(temp);
//         return;
//      } 
//     for(int i=0;i<visit.size();i++){
//         if(visit[i]==0){
//             visit[i]=1;
//             temp.push_back(arr[i]);
//             permut(arr,ans,temp,visit);
//             visit[i]=0;
//             temp.pop_back();
//         }
//      }
//  }
// int main(){
//     int arr[]={1,2,3,4};
//     vector<vector<int>>ans;
//     vector<int>temp;
//     vector<bool>visit(4,0);
//     permut(arr,ans,temp,visit);
//      for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//      }
// }

// void permut(vector<int>&arr,vector<vector<int>>&ans,int index){
//     if(arr.size()==index){
//         ans.push_back(arr);
       
//         for(int i=index;i<arr.size();i++){
//             swap(arr[index],arr[i]);
//             permut(arr,ans,index+1);
//             swap(arr[index],arr[i]);
//         }
// }




