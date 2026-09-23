#include<iostream>
using namespace std;

void printrowmax( int arr[][4],int row ,int col)
{
     int index= -1, sum = INT32_MIN;
     for(int i = 0; i<row;i++)
     {
        int total=0;
        for(int j = 0 ;j<col;j++)
        total += arr[i][j];
        if(total>sum)
        {
            sum=total;
            index=i;
        }

        
     }
     cout<<index<<" ";
}
int main()
{
    int arr1[3][4]={2,3,4,5,4,5,7,8,9,1,12,23};
    // int arr2[3][4]={ 5,6,7,8,9,0,1,2,3,4,5,6};
    // int ans[3][4];
    // for(int row=0;row<3;row++)
    //     for(int col=0;col<4;col++)
    //     ans[row][col]= arr1[row][col]+ arr2[row][col];

    // for(int row=0;row<3;row++)
    //     for(int col=0;col<4;col++)
    //     cout<<ans[row][col]<<" ";

    //print row index with maximum sum
    printrowmax(arr1,3,4);
}