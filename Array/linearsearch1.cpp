#include<iostream>
using namespace std;
bool search(int arr[],int size,int key ){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
return 0;
}
int main(){
    int arr[10]={5,7,-2,10,23,45,77,3,56,9};
    int key;
    cout<<"Enter the element you want to search"<<endl;
    cin>>key;
    bool found = search(arr,10,key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
}