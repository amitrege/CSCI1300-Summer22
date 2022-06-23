#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr[100];

    int num;
    int idx = 0;

    cout << "Enter number: ";
    while(cin >> num) {
        cout << "Enter number: ";  // no endl
        
        arr[idx] = num;
        idx++;
    }

    int size = idx;

    // Nested for-loop
    for(int i = 0; i < size; i++) {
        cout << "Outer loop index: " << i << endl;
        for (int j = 0; j < size; j++) {
            cout << "Inner loop index: " << j << endl;
        }
        cout << endl;
    }
    // In the above loop, the inner loop runs 'size' number of times
    // for every iteration of outer loop

    // What can we do with nested loops on 1D arrays?
    // We can think of the outer loop as holdding one index constant
    // The inner loop is scanning through the entire array
    // |_|_|_|_|_|_|_|_|

    for(int i = 0; i < size; i++) {
        cout << "Outer loop index: " << i << " value: " << arr[i]<< endl;
        for (int j = 0; j < size; j++) {
            cout << "Inner loop index: " << j <<" value "<< arr[j]<< endl;
        }
        cout << endl;
    }

    // What can we do with this?
    // We can now compare every single element of the array with every
    // other element of the array
    for(int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << "Found a match at indexes " << i << " and " << j<< endl;
            }
        }
        cout << endl;
    }


    // Obviously there is a match found at the same index
    // What we want is two distinct indices having the same value
    for(int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j] && i!=j) {
                cout << "Found a match at indexes " << i << " and " << j<< endl;
            }
        }
        cout << endl;
    }


    // Another way of doing this 
    for(int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << "Found a match at indexes " << i << " and " << j<< endl;
            }
        }
        cout << endl;
    }
    // |_|_|_|_|_|_|
    // We can start at j=(i+1) because if there was a match earlier
    // An earlier iteration of the outer loop would have caught the match
    // already
    // Recall you already did something like this to print triangles in
    // the last homework (the inner loop becomes smaaller depending on
    // the outer loop)




    // Now what if I want to print out a message saying no match found?
    // Many ways of doing this
    // One way would be to keep track of how many matches you've gotten
    // so far
    int match = 0;
    for(int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << "Found a match at indexes " << i << " and " << j<< endl;
                match++;
            }
        }
        cout << endl;
    }

    if(match == 0) {
        cout << "No matches found" << endl;
    }


    // This entire recipe applies to finding duplicates in all types of
    // arrays (string, char etc)
    // More generally, nested loops allow you to scan an entire array
    // and compare each value to another value in the array

    // This technique applies to strings as well
    // Think of the string as a list of chars.    
}