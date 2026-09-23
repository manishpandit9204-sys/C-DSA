#include <iostream>
using namespace std;

void findOccurrences(int arr[], int n, int x) {
    int start = 0, end = n - 1;
    int first = -1, last = -1;

    // Find first occurrence
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x) {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < x) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    start = 0;
    end = n - 1;

    // Find last occurrence
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x) {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < x) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "First and Last Occurrence: " << first << " " << last << endl;
}

int main() {
    int n, x;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to find: ";
    cin >> x;

    findOccurrences(arr, n, x);

    return 0;
}