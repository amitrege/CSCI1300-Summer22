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
    Rectangle a;

    a.set_length(5);
    cout << a.get_length() << endl;

    a.set_length(-1);
    cout << a.get_length() << endl;
}

int Rectangle::get_length() {
    return length;
}