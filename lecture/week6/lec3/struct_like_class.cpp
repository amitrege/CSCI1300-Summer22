#include  <iostream>
#include <fstream>

using namespace std;

class Point {
    int x;
    int y;

    int get_x() {
        return x;
    }
};

/*
class StreetAddress {
    int houseNum;
    string streetName;
    int n;
    int m;
    double c;

    void display()
    {
        cout << "Printing out structure" << endl;
        cout << houseNum << endl;
        cout << streetName << endl;
        cout << n << endl;
        cout << m << endl;
        cout << c << endl;
        cout << endl;
    }   
}
*/

// NOTE: THIS CODE WILL NOT COMPILE
int main() {
    Point a;

    // All data and member functions are 'private' by default
    // For structures, all data and functions are public by default
    // The following statements would work for a struct
     
    a.x = 5;

    cout << a.get_x() << endl;
}