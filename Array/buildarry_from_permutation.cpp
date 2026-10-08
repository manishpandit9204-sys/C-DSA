#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the size of Array :";
  cin >> n;
  int arr[n];
  cout << "Enter the Element of Array:";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Print the Element of Array:";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}