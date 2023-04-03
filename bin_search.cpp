#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int x)
{
    
    int mid, left, right;
    left = 0;
    right = n - 1;
    
    while (left <= right)
    {
        mid = (left + right) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            right = mid - 1;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int r = binary_search(arr,n,4);
    cout << "Index: " << r << endl;
}