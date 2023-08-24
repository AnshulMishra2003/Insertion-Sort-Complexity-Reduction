#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && temp < arr[j]) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int array[50], n;
    cout << "Enter the size of an array: ";
    cin >> n;
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "Array without sorting: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    insertion_sort(array, n);

    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
