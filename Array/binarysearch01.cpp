#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size -1;
    int mid = ((start +  end )/2);
     while (start<= end){
        if (arr[mid]==key){

         return mid ;
        }
          
           if(key > arr[mid]){
            start = mid +1;
           }
           else{
            end = mid - 1;
           }
           mid = (start + end)/2;
        }
           return -1;
}
int main(){
    int even[6]={2,4,7,9,10,36};
    int odd[5]={3,6,8,44,58};
int evenindex = binarySearch(even , 6, 11);
int oddindex=binarySearch(odd,5 ,54);
cout<<"Index of 36 is "<<  evenindex << endl;
cout<<"index of 44 "<< oddindex<<endl;
}