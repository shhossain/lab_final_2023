#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inputArray(int arr[], int n){
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void insertElements(){
    cout << "How many elements you want to insert: ";
    int n;
    cin >> n;
    int arr[n];
    inputArray(arr, n);

    cout << "Array elements are: ";
    printArray(arr, n);
}

void deleteElement(){
    cout << "How many elements you want to delete: ";
    int n;
    cin >> n;
    int arr[n];
    inputArray(arr, n);

    cout << "Array elements are: ";
    printArray(arr, n);

    cout << "Enter the index of the element you want to delete: ";
    int index;
    cin >> index;
    for (int i = index; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }

    cout << "Array elements are: ";
    printArray(arr, n);
}

void traverseArray(){
    cout << "How many elements you want to traverse: ";
    int n;
    cin >> n;
    int arr[n];
    inputArray(arr, n);

    cout << "Array elements are: ";
    printArray(arr, n);
}

void searchElement(){
    cout << "How many elements you want to search: ";
    int n;
    cin >> n;
    int arr[n];
    inputArray(arr, n);

    cout << "Array elements are: ";
    printArray(arr, n);

    cout << "Enter the element you want to search: ";
    int element;
    cin >> element;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element){
            cout << "Element found at index " << i << endl;
        }
    }
}

int main() {
    int choice;
    cout << "1. Insert elements" << endl;
    cout << "2. Delete elements" << endl;
    cout << "3. Traverse array" << endl;
    cout << "4. Search element" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        insertElements();
        break;
    case 2:
        deleteElement();
        break;
    case 3:
        traverseArray();
        break;
    case 4:
        searchElement();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    return 0;
}
