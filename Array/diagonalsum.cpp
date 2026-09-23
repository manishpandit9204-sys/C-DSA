#include<iostream>
using namespace std;

void sumdiagonal(int matrix[][3],int row ,int col)
{
int first = 0;
int second = 0;
// for first diagonal
int i=0;
while(i<row)
{
    first += matrix[i][i];
    i++;
}
   i =0;
int j = col-1;
while(j>=0){
    second +=matrix[i][j];
    i++,j--;
}
cout<<first<<" "<<second;
}
int main()
{

    int matrix[3][3]={ 2,3,4,5,6,7,8,9,10};
    sumdiagonal(matrix,3,3);
}