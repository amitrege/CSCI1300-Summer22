#include <iostream>


using namespace std;


/* 
class Rectangle {
        int length = 3;
        int breadth = 5;
    
        int get_area() {
            return length * breadth;
        }
};  // DO NOT FORGET SEMICOLON HERE













class Rectangle {
    private:
        int length = 3;
        int breadth = 5;
    
    public:
        int get_area() {
            return length * breadth;
        }

};












class Rectangle {
    private:
        int length = 3;
        int breadth = 5;
    
    public:
        int get_area() {
            return length * breadth;
        }

        void set_length(int l) { //Setters
            length = l;
        }

        void set_breadth(int b) {
            breadth = b;
        }

        int get_length() { //Getter
            return length;
        }
            
};











class Rectangle {
    private:
        // Removed initial values 
        int length;
        int breadth;
    
    public:
        // A constructor does not have a return type unlike other member functions. (illegal to return) 
        
        // Note once you define a parameterized constructor, 
        // A default constructor is not created automatically by the compiler

        Rectangle(int length, int b) {
            this->length = length;
            breadth = b;
        }


        int get_area() const {
            return length * breadth;
        }

        void set_length(int l) {
            length = l;
        }

        void set_breadth(int b) {
            breadth = b;
        }
            
};












class Rectangle {
    private:
        // Removed initial values 
        int length;
        int breadth;
    
    public:
        Rectangle(int l, int b);

        int get_area();

        void set_length(int l);

        void set_breadth(int b);
            
};

Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}

int Rectangle::get_area(){
    return length * breadth;
}

void Rectangle::set_length(int l) {
    length = l;
}

void Rectangle::set_breadth(int b) {
    breadth = b;
}
*/








/*
// INHERITANCE

class Base{
    private:
    int a = 0; 

};

class Derived : public Base {
    int b;

    public:
    int get_a() {

        return a;
    }
};

*/







int main() {
    // So far, we have seen types like : int, float, char etc
    // However, we might want to create a data type of our own 
    
    // For example, lets say we want to represent a rectangle in our program
    // Since a rectangle is defined by length (l) and breadth (b)
    // We can do : int l; int b;
    
    // These two integers are not related to each other in the program in any way
    // However, we know that these variables are semantically connected to each other
    
    // Therefore, we would like to codify this relationship in our program so that we may not use
    // these variables independently
    // Classes allow us to create "objects" which encapsulate information in one or more variables
    // along with actions associated with that class. 

    //Therefore, for the rectangle example, the associated information would be length, breadth
    // Associated actions would be, for example, getting the area.      

    // Effectively, classes allow us to create new "types".

/*
    Rectangle r = Rectangle();
    r.get_area(); 

*/












    // ACCESS SPECIFIERS

    // Public functions and attributes are available for use "outside" a function
    // Private functions and attributes are only available for use in member functions

/*
    Rectangle r = Rectangle();
    cout << r.get_area() << endl;
*/

    // Why have this distinction?
    // Let us say we create a list of employee profiles
    // Each object would contain info about an employee - name, DOB, salary, SSN etc
    
    // Lets say if someone wants to pay a particular employee's monthly salary 
    // That person does not need to know sensitive info such as SSN, DOB
    // Therefore, such info could be kept as private
    // Generally, what is kept private vs public depends on your application

    // As we saw above if no access specifer is mentioned, attributes/functions are Private by default














    // At the moment, the values of length and breadth are fixed.
    // If we want to change them after the object has been created we have two options:
    // 1. Via Setter functions
  /*  
    Rectangle r = Rectangle();
    r.set_length(5);
    r.set_breadth(10);
    cout << r.get_area() << endl;
    

*/












    // 2. Via a Constructor
    // In fact, we've already been using a constructor called the default constructor
    // Since the compiler does not know what your object is supposed to contain, it just
    // initializes attributes to default values one by one
    // For example, any int variable would be set to 0; strings would be initilaized to "" (empty string)
    // This did not happen with us because we initiliazed our variables.   

    // What is a Contructor?
    // Has the same name as class. Intuitively, creates space for an object on the computer
    
    /*
    Rectangle r = Rectangle(5, 10);
    cout << r.get_area() << endl;
*/











    // Things to watch out for when writing classes:
    // 1. Class name should start with a capital letter
    // 2. Make sure you make any member variables/ functions public by specifying an access specifier
    //    explicitly. If an access specifier is not mentioned, variables/functions are assumed 
    //    to be private
    // 3. Semi-colon after the classs definition.
    // 4. const keyword means that we are not allowed to change member attributes inside that function








/*
    // Member funtions need not be defined within a class
    // They can be declared within a class and then defined outside
    Rectangle r = Rectangle(5, 10);
    cout << r.get_area() << endl;
   
*/









/*
    Derived d;
    cout << d.b << endl;  // ERROR!!!! 'b' is private
*/


}