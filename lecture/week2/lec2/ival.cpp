#include <iostream>
using namespace std;

int main()
{

    int age1, age2;

    cout << "Enter the ages of the two users:" << endl;

    cin >> age1 >> age2;

    if (age1 < 0 || age2 < 0) {
        cout << "Invalid input. Both ages must be greater than 0" << endl;
    }
    else {
        cout << "Valid input" << endl;
    }

    /*
    We can also move the input checking to the else part:
    if (age1 >= 0 && age2 >= 0) {
        cout << "Valid input" << endl;
    }
    else {
        cout << "Invalid input. Both ages must be greater than 0" << endl;
    }
    */

    /*
    We can also check whether ages are valid individually
    if (age1 >= 0 && age2 >= 0) {
        cout << "Valid input" << endl;
    }
    else {
        if (age1 < 0) {
            cout << "Age1 cannot be less than 0" << endl;
        }

        if (age2 < 0){
            cout << "Age2 cannot be less than 0" << endl;
        }
    }
    Note:
    1. We only enter the else part if atleast one of age 1 or age2
       are smaller than 0.
    2. There is no else between the two ifsfor age 1 and age2
       So, they are not mutually exclusive cconditions. It is 
       possible both of those if statements are entered.

    */

    return 0;
}