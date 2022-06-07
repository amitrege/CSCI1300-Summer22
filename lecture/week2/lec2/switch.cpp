#include <iostream>
using namespace std;

int main()
{

    char a;

    cout << "Enter some character" << endl;
    cin >> a;

    /*
    Removing any of the 'break' statements causes control to move to the
    next option. DO NOT forget to add breaks if you want your 
    options to be mutually exclusive.
    
    You CAN have multiple statements within a case statement
    For example:
    case 'a': {
        int x = 5;
        x++;
        cout << x << endl;
        break;
    }

    In fact, you can even have another switch casee statement inside
    This would be similar to nested if-else statements 
    case 'a': {
        switch(b) {
            case 'z': .....
            .......... 
        }
    }

    */

    switch(a){
        case 'a':
            cout << "Entered option 1"<< endl;
            break;
        case 'b':
            cout << "Entered option 2"<< endl;
            break;
        case 'c':
            cout << "Entered option 3"<< endl;
            break;
        case 'd':
            cout << "Entered option 4"<< endl;
            break;
    }

    return 0;
}
