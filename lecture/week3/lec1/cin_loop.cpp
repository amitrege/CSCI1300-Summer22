#include<iostream>

using namespace std;

int main() {
    double input;

    /*
    You will exit the loop when you get an input 
    WHICH CANNOT BE CONVERTED TO DOUBLE 
    */
    while(cin >> input) {
        cout << "I got an input!" << endl;
        cout << input << endl;
    }

    /*
    If input were an int, what happens when you enter a floating point val?
    Be careful in such situations!    
    */

    return 0;
}