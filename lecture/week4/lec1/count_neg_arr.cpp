#include <iostream>

using namespace std;

// count the number of negative numbers in the array
int main()
{
    const int SIZE = 6;
    // declare and initialize array
    int arr[SIZE] = {1, -3, 78, -42, 3, 11};

    // create variable to store count
    int count = 0;

    for(int i = 0; i < SIZE; i++)
    {
        if( arr[i] < 0)
        {
            count++;
        }
        else 
        {
            continue;
        }
    }

    // print count
    cout << "Count of negative numbers: " << count << endl;

    return 0;
}