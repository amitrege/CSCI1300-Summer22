#include  <iostream>
#include <fstream>

using namespace std;

class Rectangle {
    int length;
    int breadth;

    public:
    // Function Prototypes inside class definition 
    void set_length(int i);
    
    int get_length();
};

// Function implementation anywhere (after)
// We have to include 'Rectangle::' before the name to specify 
// that the function is a member function of the class Rectangle
void Rectangle::set_length(int i) {
    if (i < 0) {
        cout << "The length of a rectangle cannot be negative" << endl;
        return;
    }

    length = i;
}

int main() {
    // Note we can have multiple objects of the same class
    // Just like you could create two string variables within one program
    // Basically, you can now treat 'Rectangle' as any other type (like int, string, double etc)
    Rectangle a;
    Rectangle b;

    // Each object of a class has its own copy of data members
    a.set_length(5);
    b.set_length(7);

    cout << "The length of Rectangle a is " << a.get_length() << endl;
    cout << "The length of Rectangle b is " << b.get_length() << endl;
    
}

int Rectangle::get_length() {
    return length;
}