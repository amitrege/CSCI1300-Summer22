// linear search

#include <iostream>

using namespace std;

int main()
{
    const int CAPACITY = 100;     // a large(r) value
    
    // initialize the array
    string values[CAPACITY] = { "Harry", "Ron", "Hermione", "Luna", "Neville" }; 
    
    int current_size = 5;         // keep track of elements
    
    string to_find;               // to store input

    cout << "Enter string to be searched: ";
    cin >> to_find;
    
    int search_index = -1;      // flag + valuable index information
    
    // go through each element, check if the element is to_find
    for(int i = 0; i < current_size; i++) {
        if (values[i] == to_find) {
            search_index = i;
            break;
        }
    }
    
    // Let's verify the search_index
    if (search_index == -1) {
        cout << "String: " << to_find << " NOT FOUND!" << endl;
    }
    else {
        cout << "String: " << to_find << " FOUND at Index: " << search_index << endl;
    }

    return 0;
}