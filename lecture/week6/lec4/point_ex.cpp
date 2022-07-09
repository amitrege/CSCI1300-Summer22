#include <iostream>
#include <cmath>

using namespace std;

class Point2D {
    double x;
    double y;

    public:
    Point2D() {
        x = 0.0;
        y = 0.0;
    }

    Point2D(double x, double y) {
        this->x = x;
        this->y = y;
    }

    int get_x() {
        return x;
    }

    int get_y() {
        return y;
    }

    void set_x(double x) {
        this->x = x;
    }

    void set_y(double y) {
        this->y = y;
    }

    double distance(Point2D p) { // (x1 - x2)^2 + (y1 - y2)^2
        return sqrt((p.get_x() - x)*(p.get_x() - x) + (p.get_y() - y)*(p.get_y() - y));
    }

    void display() {
        cout << "This point represents (" << x << ", " << y << ")" << endl;
    }

};

int main() {
    Point2D p(1,2.3);

    p.display();

    Point2D d(1, 1);
    //d.set_y(2);

    // Can also call d.distance(p)
    // It doesn't matter since distance starting from either point is the same
    // and distance() is a member function
    cout << p.distance(d) << endl; 
}