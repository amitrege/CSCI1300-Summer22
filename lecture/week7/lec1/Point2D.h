#ifndef POINT2D_H  // Can use any name as long as it is unique to this file
#define POINT2D_H // Using all caps is convention; not required

// You should have any other include statements here inside the guard

// Notice how we did not need to include iostream here since we do
// not use it in this file

class Point2D {
    double x;
    double y;

    public:
    Point2D();

    Point2D(double x, double y);

    int get_x();

    int get_y();

    void set_x(double x);

    void set_y(double y);

    double distance(Point2D p);

    void display();

};

#endif