#include <iostream>

using namespace std;

int a = 10; // Called a global variable; accessible everywhere
// Usually a terrible idea to decalre global variables

int func1(int num) {
    num = num + 1;
    cout << "The value of \'a\' inside func1 is " << a << endl;
    return num;
}

int func2(int a) {
    a = a + 1;
    cout << "The value of \'a\' inside func2 is " << a << endl;
    return a;
}

int func3(int num, int *a) {
    num = num + 1;
    cout << "The value of \'a\' inside func3 is " << *a << endl;
    *a = *a + 1;
    return num;
}

int main() {
    int num = 1;
    num = func1(num);
    num = func2(num);

    cout << "The value of \'a\' inside main is " << a << endl;

    // Why are global vars a bad idea?
    // What if we had another 'a' in our main function 
    int a = 5;
    cout << "The value of \'a\' inside main is " << a << endl;
    // In the above statement a = 5
    // Makes your code confusing


    // Why do people use global variables then?
    // So that they can make changes to multiple parameters
    // Recall, we can only return one value in c++
    // Therefore, if we do
    // int f(int num, int a) {
    //      num = num + 1;
    //      a = a + 1; 
    //      return num;   <- We can only affect either 'num' or 'a' outside
    //                       not both with the return statement
    //  }


    // If we use global variables
    // int f(int num) {
    //      num = num + 1; 
    //      a = a + 1;
    //      return num
    // }
    // Note we didn't have to pass a second parameter since 'a' is global
    // and available everywhere



    // Solution without globals? Use pointers!!
    // See func3 above or alternatively we can make both params pointers
    // void func4 (int *num, int *a) {
    //      *num = *num + 1;   
    //      *a = *a + 1;
    // } 
}