#include "Point2D.h"
#include <iostream>
#include <cmath>

// We need to include the '.h' file to let the compiler know what class
// we are talking about

// We include iostream and cmath here since they are used to define
// member functions

using namespace std;

Point2D::Point2D() {
    x = 0.0;
    y = 0.9;
}

Point2D::Point2D(double x, double y) {
    this->x = x;
    this->y = y;
}

int Point2D::get_x() {
    return x;
}

int Point2D::get_y() {
    return y;
}

void Point2D::set_x(double x) {
    this->x = x;
}

void Point2D::set_y(double y) {
    this->y = y;
}

double Point2D::distance(Point2D p) {
    return sqrt((p.get_x() - x)*(p.get_x() - x) + (p.get_y() - y)*(p.get_y() - y));
}

void Point2D::display() {
    cout << "This point represents (" << x << ", " << y << ")" << endl;
}
