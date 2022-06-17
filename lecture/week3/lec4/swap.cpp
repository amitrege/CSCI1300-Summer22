#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    // Create a temporary variable to store the value of 'a'
    int temp = *a;

    // Put the value of 'b' into 'a' 
    *a = *b;

    // Use the temporary variable to put the old value of 'a' into 'b'
    *b = temp;
}

void swap2(int a, int b) {
    // Create a temporary variable to store the value of 'a'
    int temp = a;

    // Put the value of 'b' into 'a' 
    a = b;

    // Use the temporary variable to put the old value of 'a' into 'b'
    b = temp;
}

int main() {
    int a = 10;
    int b = 5;

    cout << "The value of \'a\' before the swap is " << a << endl;
    cout << "The value of \'b\' before the swap is " << b << endl;
    cout << endl;

    //swap(&a, &b);
    swap2(a, b);

    cout << "The value of \'a\' after the swap is " << a << endl;
    cout << "The value of \'b\' after the swap is " << b << endl;

    return 0;
}