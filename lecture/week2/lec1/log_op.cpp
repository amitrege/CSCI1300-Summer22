#include <iostream>
using namespace std;

int main()
{

    bool a = true;

    // NOT operator -> reverses the truth value
    // true becomes false and false becomes true;
    bool b = !a;
    cout << "Value of b is " << b << endl;

    // Logical AND operator -> takes two operands
    // a && b -> is true only if both a and b are true
    cout << "Value of a && b is " << (a && b) << endl;

    // Logical OR operator -> takes two operands
    // a || b -> is false only if both a and b are false
    // a || b is true if either a or b is true
    cout << "Value of a && b is " << (a || b) << endl;

    // See preceddence table for rules
    // Remember though: USE PARENTHESIS!!!!
    // Make order of operation explicit
    // E.g -> (a || (b && c) || d)   

    return 0;
}