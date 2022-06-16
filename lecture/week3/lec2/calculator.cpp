#include <iostream>

using namespace std;

double add(double n1, double n2)
{
    return n1 + n2;
}

double diff(double n1, double n2)
{
    return n1 - n2;
}

double prod(double n1, double n2)
{
    return n1 * n2;
}

double div(double n1, double n2)
{
    return n1 / n2;
}

int main()
{   
    double num1 = 0, num2 = 0;
    char option;
    do // 
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        // Keep taking input till you get valid inputs
        // cin.fail() is true when the previous use of cin got invalid
        // inputs i.e. different types/format than expected
        while(cin.fail())
        {
            // cin.clear() clears the failed state from cin
            // doing cin.fail(), now, would be false 
            cin.clear(); 
            // cout << cin.fail() << endl;

            // Ignore 10 chracters on the stream or until '\n'
            // whichever comes first 
            // 10 was chosen arbitrarily, ideally you should be doing
            // cin.ignore(numeric_limits<streamsize>::max(),'\n')
            // This ignores the maximum size of your stream
            cin.ignore(10, '\n');

            cout << "Invalid input" << endl << "Enter two numbers: " << endl;
            cin >> num1 >> num2;
        }

        cout << "Choose an operation: + - * /. Type # to exit" << endl;
        cin >> option;
        switch(option)
        {
            case '+': {
                cout << "Addition: " << add(num1,num2) << endl;
                break;
            }
            case '-': { 
                cout << "Subtraction: " << diff(num1,num2) << endl;
                break; 
            }
            case '*': { 
                cout << "Multipilcation: " << prod(num1,num2) << endl;
                break; 
            }
            case '/': { 
                cout << "Division: " << div(num1,num2) << endl;
                break;
            } 
            case '#': { 
                cout << "Goodbye!" << endl;
                break; 
            }
            default: { 
                cout << "Invalid option. Choose again" << endl;
                break;
            }
        }   
    } while (option != '#');
    
    return 0;
}