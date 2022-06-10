#include <iostream>
#include <string> // 
using namespace std;

int main()
{
    // Example: buy supplies from a store
    char option;
    cout << "What category of supplies would you like to browse today?"  << endl;
    cout << "a: Fishing" << endl;
    cout << "b: Skiing" << endl; // converting 
    cout << "c: Biking" << endl;
    cout << "q: Quit" << endl;
    cin >> option;

    // Demorgan's law:
    //  (NOT a) AND (NOT b) = NOT (a OR B) and vice versa
    
    // In C++:
    // !a && !b = !(a || b)
    // !(a && b) = !a || !b 

    // loop through the menu continuously
    // Loop keeps going until the user enters 'q' or 'Q' 
    while(option != 'q' && option != 'Q')
    // !(option == 'q' || option == 'Q')
    {
        if (option == 'a' || option == 'A')
        {
            cout << "You chose fish" << endl;
        }
        else if(option == 'b' || option =='B')
        {
            cout << "You chose skii" << endl;
        }
        else if (option == 'c' || option =='C')
        {
            cout << "You chose bike" << endl;
        }
        else 
        {
            cout << "Invalid input. Choose one the options displayed below!" << endl;
        }
        cout << "What category of supplies would you like to browse today?"  << endl;
        cout << "a: Fishing" << endl;
        cout << "b: Skiing" << endl; 
        cout << "c: Biking" << endl;
        cout << "q: Quit" << endl;
        cin >> option;
    }
    

    return 0;
}