#include<iostream>
#include<algorithm>
using namespace std;

 void wave( int arr[][4],int row,int col)
 {

        for(int j =0;j<col;j++){
        if(j%2==0){
            for(int i=0;i<row;i++)
            cout<<arr[i][j]<<" ";
            cout<<endl;
        }
        else
        {
        for(int i=row-1;i>=0;i--)
        cout<<arr[i][j]<<" ";
        cout<<endl;
        }
    }

}
 

int main()

{

    int arr[4][4]={3,6,4,2,7,8,11,5,9,3,2,1,17,8,5,9};
    int ans[4][4];

    wave(arr,4,4);
}