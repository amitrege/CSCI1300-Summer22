#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    // We have learnt that an array is just a contiguous block 
    // of locations in memory

    // For example: int a[4] = {1,2,3,4}
    // |__|__|_1|_2|_3|_4|__|__|__|__|__|
    // |__|__|__|__|__|__|__|__|__|__|__|




    // This means that if we know the address of the first element (say ptr), 
    // then the address of the second element is (ptr + 1) 
    // 3rd element -> (ptr + 2)  





    // We also know how to get the value at a particular address 
    // (deferencing) using the * operator
    // Therefore, the first element can be obtained by 
    // dereferencing ptr i.e. by doing *ptr -> a[0]

    // 2nd element -> *(ptr + 1) (equvivalent to a[1])

    int a[5] = {1,2,3,4,5};

    cout << "Printing out array using standard array notation" << endl;
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    } 
    cout << endl;








    cout << "Printing out array using pointers" << endl;

    // Get the address of the first element in the array
    int *ptr = &a[0];  

    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " "; // *(ptr + 0), *(ptr + 1) .....
    }
    cout << endl;











    // Recall that when passing arrays to functions 
    // we mentioned that the name of an array decays to a pointer
 
    // For example, in a program:
    // int b[3] = {1,2,3};
    // f(b) --> Definition of f() could look like : void f(int& b)

    // Turns out, the name of the array decays to a pointer 
    // to the first element 
    // Thus, there is no need to create an explicit pointer variable

    cout << "Printing out array using pointers" << endl;

    for (int i = 0; i < 5; i++) {
        cout << *(a + i) << " ";  // the name 'a' is a pointer to the 
                                  // first element in the array
    } 
    cout << endl;

    // *(a + i) -> a[i]


}