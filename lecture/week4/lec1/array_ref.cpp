#include <iostream>

using namespace std;

// version 1
void modifyVariables(int a, int b)
{
    a = 20;
    b = a * 10;
}

void modifyArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i] + 10;
    }
}

// print array
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // constant variables (const keyword) cannot be modified after initialization
    // naming style - all caps
    const int SIZE = 12;
    int a = 10, b = 20;

    cout << "Before modifyVariables function call" << endl;
    cout << a << "   " << b << endl;
    
    modifyVariables(a,b);
    cout << "After modifyVariables function call" << endl;
    cout << a << "   " << b << endl;

    int arr[SIZE] = {1, 2, 3, 4, 5};

    cout << "Before modifyArray function call" << endl;
    // print arr
    printArray(arr, SIZE);

    modifyArray(arr, SIZE);
    cout << "After modifyArray function call" << endl;

    // print arr
    printArray(arr, SIZE);

    return 0;
}