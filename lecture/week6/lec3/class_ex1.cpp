#include  <iostream>
#include <fstream>

using namespace std;

class Point {
    int x;
    int y;

    public:
    void set_x(int i) {
        x = i;
    }

    int get_x() {
        return x;
    }
};

int main() {
    Point a;

    // Still can't directly refer to x (privatee by default)
    // Have to go through member functions
    // a.x = 5;

    a.set_x(5);
    cout << a.get_x() << endl;
}

/*
How can we access 'x' like we did in a struct?
Just declare everything to be public

class Point {
    public:
    int x;
    int y;

    void set_x(int i) {
        x = i;
    }

    int get_x() {
        return x;
    }
};

Now we can access a.x to either modify the value or just to view it

However, it is usually a good idea to have data members (attributes)
be private and member functions be public.

Why? See 'class_ex2.cpp' for an example
*/