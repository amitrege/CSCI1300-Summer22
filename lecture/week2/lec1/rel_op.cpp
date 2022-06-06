#include <iostream>
using namespace std;

int main()
{
    // variables of type bool.
    // let's declare a variable of type bool
    bool var1;

    // and initialize it
    var1 = 1;

    // and display  it
    cout << "the value of var1 is: " << var1 << endl;

    // let's assign it another value
    var1 = false;
    cout << "the value of var1 is: " << var1 << endl;

    // let's create a new variable x and assign it a value
    int x = 17;
    // what value are we assigning to var1?
    var1 = (x < 20); 
    cout << "the value of var1 is: " << var1 << endl;

    // relational operators <, >, <=, >=, == , !=
    var1 = x == 17;
    cout << "the value of var1 is: " << var1 << endl;

    // C++ assumes any non zero number to be equivalent to true
    // only 0 is considered to represent false
    // so, you can do the following:
    // bool a = -1 -> a is equivalent to true
    // bool a = 3 -> a is equivalent to true

    // Ideally, however, you should always use 
    // (true or false) or (1 or 0) to represent truth values
    // DO NOT mix and match  
    
    return 0;
}