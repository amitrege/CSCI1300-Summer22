#include <iostream>

using namespace std;

int update1(int num) {
    num = num + 1;
    return num; 
}

void update2(int a) {
    a = a + 1;
}

void update3(int *a) {
    *a = *a + 1;
}

void update4(int *a) {
    a = a + 1;
}

void update5(int **a) {
    *a = *a + 1;
}

int main() {

    int a = 5;

    // Let's say we want to increment this variable
    // We can do
    a++; // Now the value of a is 6
    cout << "The value of \'a\' after a++ is " << a << endl;




    // If we wanted to update the value of 'a' using a function
    // we can use the update1 function defined above
    cout << endl;
    cout << "The value of \'a\' before update1 is " << a << endl;
    a = update1(a);
    // The value of a is now 7
    cout << "The value of \'a\' after update1 is " << a << endl;
    
    // When the parameter 'a' gets passed to the function update1,
    // the function actually makes a local copy of the variable 'a'
    // called num (this copy gets destroyed once we exit the function)

    // Therefore, any changes we make to the input parameters of 
    // a function do not affect variables outside the function
    // (variable 'a' in this case)

    // Note even if update1 was something like:
    //  int update1(int a) {
    //      a = a + 1;
    //      return a; 
    //  }
    // The variable 'a' being passed from outside and the variable 'a'
    // being used inside are DIFFERENT.
    // Infact, the 'a' inside the function is a copy of the 'a' ouside
    // just like num in the previous example.

    // All of this means that, if we don't return our results from inside
    // the function (using the return statement), there is no way we can
    // affect anything outside the function.
    
    // Look at the definition of update2 above. (return type is void)
    
    // update2 uses a copy of 'a' from the ouside, updates it but because
    // it does not return anything, that copy of 'a' gets destroyed after 
    // the function ends.
    // So if we do
    cout << endl;
    cout << "The value of \'a\' before update2 is " << a << endl;
    update2(a); // Value of 'a' remains the same 
    cout << "The value of \'a\' after update2 is " << a << endl;






    // Now, lets say we wanted to avoid making a copy (to save memory)
    // of every parameter just tomake an update inside a function
    
    // This is where pointers come in
    // Instead of passing the variable 'a' to a function, we pass the 
    // pointer to that variable (address to that variable)
    cout << endl;
    cout << "The value of \'a\' before update3 is " << a << endl;
    update3(&a); // Pass address of a 
    cout << "The value of \'a\' after update3 is " << a << endl;

    // What is happening above?
    // The function sill makes a copy of the parameter (address of 'a')
    // But since we make a copy of the address and not the variable 
    // itself, both these copies point to the exact same value in memory

    // Therefore, when we dereference (i.e. use the * operator) we are 
    // making a change to the 'a' variable on the outside!

    /* Example:  (Address of 'a')             (Copy of Address of 'a')
                        \                               /
                         \                             /
                          \                           /
                           \                         / 
                            (Value of the variable'a')

    */





   // Just to solidify this subtle concept
   // Lets say we wanted to a modify a pointer (or address) in a function
   int *p = &a;
   // Look at update4 defined above. Will it change the value of p outside?
   // NO!
    cout << endl;
    cout << "The value of \'p\' before update4 is " << p << endl;
    update4(p); // Pass address of a 
    cout << "The value of \'p\' after update4 is " << p << endl;



    //What do we need to do? Pass a pointer to a pointer
    int **x = &p;
    cout << endl;
    cout << "The value of \'p\' before update5 is " << p << endl;
    update5(x); // Pass address of a 
    cout << "The value of \'p\' after update5 is " << p << endl;
    //Same reasoning as above applies
    // We have made a copy of the ADDRESS of 'p' instead of 'p' itself 

    // Moral of the story:
    // If you want a variable on the outside of a function to be 
    // affected by what goes on on the inside of a function, 
    // pass a pointer to that variable instead of just that variable


    return 0;
}