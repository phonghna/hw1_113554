#include <iostream>
using namespace std;


void NGE(int arr[], int size)
{
    int next, i, j;
    for (i = 0; i < size; i++) {
        next = -1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                next = arr[j];
                break;
            }
        }
        cout << arr[i] << " -> " << next << endl;
    }
}

int main()
{
    int arr[] = { 4, 5, 2, 25 };
    int size = sizeof(arr) / sizeof(arr[0]);
    NGE(arr, size);
    return 0;
}