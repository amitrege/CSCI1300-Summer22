#include <iostream>

using namespace std;

// functions utilized in programs so far 
// pow, sqrt, main, length, floor, exp, setprecision, setw, fail, clear - ()
// 

// user defined function - we create
// built-in function - headers

// Function advantages
// 1. increases readability
// 2. easier to test/modify a block of code vs. a full program
// 3. break up a complex program into smaller chunks
// 4. avoid repeating the same code multiple times in your program

// setprecision(3)
// length()

// function definition
// name, parameters that are enclosed in (), return
// data type - int, double, char, string, bool, long int, signed int, unsigned int, void
bool isValidEmail(string email) // function input - formal parameters/parameters; any number; ,
{
    int len = email.length(); // storing length of email

    for(int i = 0; i < len; i++)
    {
        if(email[i] == '@')
        {
            return true; // return 1; // return stops function execution and goes back to the calling function
        }
    }
    return false; // return 0;
}

// paramters - data type
// arguments - variable name, value


int main()
{   
    string email;
    
    // cin >> email; is alternate approach to accepting user input

    // function call
    getline(cin,email); // function input at the time of function call - actual parameters/ arguments
    // Note that cin isn't a function, it is an object (stream object specifically)
    // And '<<' is the operator acting on that object
    // We will learn about objects later
    
    bool flag = 0;
    
    // function call that returns value is stored in a variable
    flag = isValidEmail(email);
    if(flag) // 0 or 1
    {
        cout << "Valid email" << endl;
    }
    else
    {
        cout << "Not a valid email" << endl;
    }
       
    return 0; // this is the last statement 
}