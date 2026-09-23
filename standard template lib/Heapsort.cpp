#include<iostream>
using namespace std;

void Heapify(int arr[],int index,int n)
{
  int largest= index;
  int left= 2*index+1;
  int right= 2*index+2;

  if(left < n && arr[left]>arr[largest])
  {
    largest=left;
  }
  if(right<n && arr[right]> arr[largest])
  {
    largest= right;
  }
  if(largest!=index)
  {
    swap(arr[index],arr[largest]);
    Heapify(arr,largest,n);
  }
}

void BuildMaxHeap(int arr[],int n)
{
 for(int i=n/2-1;i>=0;i--)
 Heapify(arr,i,n);
}

void PrintMAxHeap(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
void sortArray(int arr[],int n)
{
 for(int i=n-1;i>0;i--){
 swap(arr[i],arr[0]);
 Heapify(arr,0,i);
 }
}

int main()
{
  int arr[]={1,5,7,3,9,6,8,2,10,4};
  BuildMaxHeap(arr,10);
  sortArray(arr,10);
  PrintMAxHeap(arr,10);
}