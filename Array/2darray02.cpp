#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  // creating 2d vector
  // vector<vector<int> > matrix(3,vector<int>( 4 , 1));
  // // for(int i = 0;i<3;i++){
  // //   for(int j=0;j<4;j++){
  // //     cout<<matrix[i][j]<<" ";
  // //   }
  // // }

  // // how to find no. of rows and column
  // cout<<"Rows = "<<matrix.size();
  // cout<<endl;
  // cout<<"Column = "<<matrix[0].size();
  

// user defined


int row, col;
cout << "Enter the rows and col : " << endl;
cin >> row >> col;

vector<vector<int>> matrix(row, vector<int>(col, 1));

// Input
for (int i = 0; i < row; i++)
  for (int j = 0; j < col; j++)
    cin >> matrix[i][j];

// Output
for (int i = 0; i < row; i++) {
  for (int j = 0; j < col; j++)
    cout << matrix[i][j] << " ";
  cout << endl;
}

}

