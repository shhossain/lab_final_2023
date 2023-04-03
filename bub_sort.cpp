#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for (int i = 0; i < n -1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
    
}

int main() {
    int arr[] = {10, 2, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}