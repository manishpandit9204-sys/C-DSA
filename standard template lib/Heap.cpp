#include <iostream>
using namespace std;

class MaxHeap
{
  int *arr;
  int size;       // Total element in heap
  int total_size; // total size of array
public:
  MaxHeap(int n)
  {
    arr = new int[n];
    size = 0;
    total_size = n;
  }

  // Insert into the Heap

  void insert(int value)
  {
    // if  Heap Size  is available or not

    if (size == total_size)
    {
      cout << "Heap OverFlow";
      return;
    }
    arr[size] = value;
    int index = size;
    size++;

    // Compare it with its Parents

    while (index > 0 && arr[(index - 1) / 2] < arr[index])
    {
      swap(arr[index], arr[(index - 1) / 2]);
      index = (index - 1) / 2;
    }
    cout << arr[index] << " is inserted into the  heap";
    cout << endl;
  }

  void print()
  {
    for (int i = 0; i < size; i++)
      cout << arr[i] << " ";
    cout << endl;
  }

  void Heapify(int index)
  {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < size && arr[left] > arr[largest])
    {
      largest = left;
    }
    if (right < size && arr[right] > arr[largest])
    {
      largest = right;
    }

    if (largest != index)
    {

      swap(arr[index], arr[largest]);
      Heapify(largest);
    }
  }
  void Delete()
  {
    if (size == 0)
    {
      cout << "Heap UnderFlow\n";
      return;
    }
    cout << arr[0] << "  "
                      "deleted from heap";
    arr[0] = arr[size - 1];
    size--;

    if (size == 0)
    {
      return;
    }
    Heapify(0);
  }
};
int main()
{
  MaxHeap H1(6);
  H1.insert(4);
  H1.insert(43);
  H1.insert(54);
  H1.insert(34);
  H1.insert(44);
  H1.insert(46);
  H1.insert(47);
  cout << endl;
  H1.print();
  H1.Delete();
  cout << endl;
  H1.print();
}