#include<iostream>
 using namespace  std;
/*void printArray( int arr[],int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
} */
int uniqueArray( int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int m[7]={1,2,3,4,1,2,3};
//printArray(m,7);
 int unique= uniqueArray(m,7);
 cout<<"unique element is="<<" "<<unique<<endl;
 
}