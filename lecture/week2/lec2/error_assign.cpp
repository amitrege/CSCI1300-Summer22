#include <iostream>
using namespace std;

int main()
{

    // Common error to confuse = vs ==
    // Usually typos, but can cause major headaches while debugging
    
    // The statement: a = 3;
    // returns the value being assigned (3 in this example)
    // Note any non zero value in C++ is treated as true

    // if (a = 3) {.....}
    // will always be true
    
    // What the user actually wanted to do was likely:
    // if (a == 3) {....}
    // The above statement is only true when a is equal to 3

    // This error can also occur with 'char' typee variables
    // char c = 'a'
    // if (c = 'b') instead of if (c == 'b')

    int x = 0;

    if (x == 0) { 
        cout << "Entered if statement" <<endl;
    }

    return 0;
}