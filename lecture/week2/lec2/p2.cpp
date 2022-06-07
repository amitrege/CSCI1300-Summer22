#include <iostream>
using namespace std;

int main()
{

    int option1, option2;

    cout << "What is your major? 1. Computer Science 2. Aerospace" << endl;

    cin >> option1;

    /* Notes:
    You can have as many levels of if-else statements as you want
    depending on the problem.
    In this example, you get the same menu on the second level
    regardless of the option you choose on level 1. Other problems
    may have different menus on different levels depending on the
    option you choose on the previous level.
    */
    if (option1 == 1) {
        cout << "What year are you in? 1.Freshman 2. Sophomore 3.Junior 4.Senior"<< endl;
        cin >> option2;

        if (option2 == 1){
            cout << "You're a Computer Science Freshman!"<< endl;
        }
        else if(option2 == 2){
            cout << "You're a Computer Science Sophomore!"<< endl;
        } 
        else if(option2 == 3){
            cout << "You're a Computer Science Junior!"<< endl;
        }
        else if(option2 == 4){
            cout << "You're a Computer Science Senior!"<< endl;
        }
        else {
            // Input validation
            cout << "Invalid input. Choose between values on the screen" << endl;
        } 
    }
    else if (option1 == 2){
        cout << "What year are you in? 1.Freshman 2. Sophomore 3.Junior 4.Senior"<< endl;
        cin >> option2;

        if (option2 == 1){
            cout << "You're a Aerospace Freshman!"<< endl;
        }
        else if(option2 == 2){
            cout << "You're a Aerospace Sophomore!"<< endl;
        } 
        else if(option2 == 3){
            cout << "You're a Aerospace Junior!"<< endl;
        }
        else if(option2 == 4){
            cout << "You're a Aerospace Senior!"<< endl;
        }
        else {
            // Input validation
            cout << "Invalid input. Choose between values on the screen" << endl;
        }
    }
    else{
        // Input validation
        cout << "Invalid input. Choose between values on the screen" << endl;
    }

    return 0;
}