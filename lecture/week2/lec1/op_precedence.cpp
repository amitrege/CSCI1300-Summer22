#include<iostream>

using namespace std;

int main(){

    int a = 1;
    int b = 3;
    int c = 4;

    // Even though you might know what the operator rules are
    // Try to make explicit the order of operations you want
    // a = b - (a * c);
    a = b - a * c;

    c = a / c - a + b * a / b;
    // c = ((a / c) - a + ((b * a) / b));
    cout << c << endl; 



    // What is the value of a here?
    // No amount of parathesis are going to make clear the order
    // of operations
 
    a = 1;
    a += --a + a++;
    // What is the value of 'a' here?
    // I don't care.
    // You can run this code with your compiler and figure it out.
    // But clearly this is a terrible way of writing code

    // a += (--a) + (a++) -> doesn't really help us?  

    // Rule of thumb:
    // Try to only have one update operator per line
    // In the above example, we have 3 update operators
    // namely : a++, ++a and += operator
    // Instead do this:
    // a++;
    // int d = a;
    // ++a;
    // a = a + d;

    cout << "Value of a is " << a << endl;

    return 0;
}