#include  <iostream>
#include <fstream>

using namespace std;

class Rectangle {

    int length;
    int breadth;

    public:
    void set_length(int i) {
        if (i < 0) {
            cout << "The length of a rectangle cannot be negative" << endl;
            return;
        }

        length = i;
    }

    int get_length() {
        return length;
    }
};

int main() {
    Rectangle a;
    
    a.set_length(5);
    cout << a.get_length() << endl;

    a.set_length(-1);
    cout << a.get_length() << endl;
}

/*
Notice how having access to data via just member functions allows us
to do input validation within the class definition
This means that the code inside main itself is super clean
Also, it means that the user of this class does not need to worry
about doing input validation.

What if everything were public?
Then, in the main function, one could potentially do:
a.length = -1;
This would be legal

Obviously, we could put an if statement around this and check
but, now, the user needs to do extra work in the main function

Suppose you are working with a class you did not write.
In this case, you might not be aware of internal implementation details
or the properties of the object you are using.
Therefore, having access to data members directly adds extra load onto
the client programmer.

Ideally, all our classes should have all data members be private by default
Member functions can be public or private depending on the use case

In summary, member functions will be how we interact with objects ('interface')
and their data members will stay hidden inside ('encapsulation') 
*/