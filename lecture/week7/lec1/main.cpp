#include <iostream>
#include "Point2D.h"

// Notice the double quote include rather than using angled brackets

// Note we did not need to include cmath here since it is not used here

using namespace std;

int main() {
    Point2D p(1,2.3);

    p.display();

    Point2D d(1, 1);

    // Can also call d.distance(p)
    // It doesn't matter since distance starting from either point is the same
    // and distance() is a member function
    cout << p.distance(d) << endl;
}