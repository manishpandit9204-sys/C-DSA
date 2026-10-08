#include <iostream>
using namespace std;

void permutation(int arr[], int n)
{
  int *temp = new int[n];

  for (int i = 0; i < n; i++)
  {
    temp[i] = arr[arr[i]];
  }

  for (int i = 0; i < n; i++)
  {
    arr[i] = temp[i];
  }

  delete[] temp;
}

int main()
{
  int n;

  cout << "Enter the size of Array: ";
  cin >> n;

  int *arr = new int[n];

  cout << "Enter the Elements of Array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  permutation(arr, n);

  cout << "\nAfter Permutation: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  delete[] arr;

  return 0;
}