#include <iostream>
using namespace std;

int main()
{

    int age;
    char initial;

    cout << "Enter age and initial" << endl;

    cin >> age >> initial;

    // There is no special reason to check age first and then initial
    // You can flip the if statements as well
    // i.e. check initials before age
    if (age == 10 || age == 19 || age == 23) {
        if (initial == 'a' || initial == 'w' || initial == 'z') {
            cout << "You won!" << endl;
        }
        else {
            cout << "You didn't win....." << endl;
        }
    }
    else {
        cout << "You didn't win....." << endl;
    }

    /*
        What if I want to add input validation on age?
        Check if the input age is valid?
        Just put the above code inside an if-else statement

        if (age < 0) {
            cout << "Enter valid age" << endl;
        }
        else {
            // Everything from here on is what we had written above
            
            if (age == 10 || age == 19 || age == 23) {
                if (initial == 'a' || initial == 'w' || initial == 'z') {
                    cout << "You won!" << endl;
                }
                else {
                    cout << "You didn't win....." << endl;
                }
            }
            else {
                cout << "You didn't win....." << endl;
            }
        }
    */

    return 0;

}