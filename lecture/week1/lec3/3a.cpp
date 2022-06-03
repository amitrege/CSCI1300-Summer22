#include <iostream>

using namespace std;

/*
    Problem:
    Given radius from user, output area + circumference of a circle
*/

int main() {

    int radius;

    // Note there is no endl at the end of cout here
    // Its because we want the prompt and user input to be on
    // the same line for purely aesthetic reasons
    cout << "Enter radius of the circle : " << endl;
    cin >> radius;

    // This moves cursor to the next line after user enters input
    // You can use the new line character (\n) to do this as well
    // cout << "\n";
    cout << endl;
    // Done again for aesthetic reasons

    const double PI = 3.14;
    double area = PI * radius * radius;
    // We can also use the pow() function - pow(radius, 2)
    // Be sure to have #include<cmath> at the top of your program

    double circumference = 2*PI*radius;

    cout << "Area: " << area << " Circumference: " << circumference<< endl;

    return 0;
}
