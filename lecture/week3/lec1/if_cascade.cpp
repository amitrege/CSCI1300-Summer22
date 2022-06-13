#include<iostream>

using namespace std;

int main() {

    int num;
    cout << "Enter number:" << endl;

    cin >> num;

    /* 
    Remember the if and else parts are mutually exclusive
    You cannot enter both the else and the if part
    So, if you have an if-else cascade like below you will 
    execute only one of these cout statements (if conditions are different)
    */

   /*
    if (num < 0) {
        cout << "Enter valid input" << endl;
    }
    else if (num == 0) {
        cout << "Hello" << endl;
    }
    else if (num < 100) {
        cout << "World" << endl;
    } 
    else {
        cout << "Bye" << endl;
    }
    */

    /*
    Below multiple if statements canbe entered depending on the value of num
    if num was -1
    num < 0 is true and num < 100 is also true
    */

    
    if (num < 0) {
        cout << "Enter valid input" << endl;
    }
    if (num == 0) {
        cout << "Hello" << endl;
    }
    if (num < 100) {
        cout << "World" << endl;
    } 
    else {
        cout << "Bye" << endl;
    }
    

    return 0;
}