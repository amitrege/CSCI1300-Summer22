#include<iostream>

using namespace std;

int main() {
    int fib = 1;
    int num1 = 0;
    int num2 = 1;
    
    int n;
    cout << "Enter the term of the Fibonacci Sequence to calculate:" << endl;
    cin >> n;
    
    /*
    When n is 1 or 2, we have special cases
    */
    if (n == 1) {
        cout << 0 << endl;
    }
    else if (n == 2) {
        cout << 1 << endl;
    }
    else {
        for (int i = 2; i< n; i++) {
            /*
            We always keep track of two numbers,
            the current fibonacci number and the previous number
            This allows us to calculate the next no and move the
            loop forward

            When n is 2 or greater,
            1. Calculate the next fibonacci number
            2. Update the current numbers you are keeping track of

            */

            fib = num1 + num2;
            num1 = num2;
            num2 = fib;
        }
        
        cout << num2 << endl;
    }
}