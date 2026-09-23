#include<iostream>
using namespace std;

int peakElement(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if((mid == 0 || arr[mid] > arr[mid-1]) &&
           (mid == size-1 || arr[mid] > arr[mid+1])){
            return mid;
        }
        else if(mid > 0 && arr[mid-1] > arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return -1;
}

int main(){
    int size, arr[1000];

    cout << "Enter the Size of the array: ";
    cin >> size;

    cout << "Enter the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int index = peakElement(arr, size);

    if(index != -1)
        cout << "Peak Element: " << arr[index] << endl;
    else
        cout << "No Peak Element Found";

    return 0;
}