#include <iostream>
#include <string>

using namespace std;

int main() {

    char c;

    c = 'A';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;

    c = 67;
    cout << c << endl;
    //cout << static_cast<int>(c) << endl;

    int i = 68;
    cout << static_cast<char>(i) << endl;

    cout << endl; 

    c = 'B';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;

    c = 'Z';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;
    
    c = 'a';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;

    c = 'b';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;

    c = 'z';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;

    c = '1';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;

    c = '2';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;

    /*
    Note., we cannot do the following 
    c = '10';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    '10' is not a character but actually two characters
    If you want to use a sequence of characters, use strings   
    */

    cout << endl;

    /*
    String literals and character literals are NOT the same
    We cannot do: char c = "a"; // Compilation Error 
    You need: string c = "a" // 'a' are not the same
    */

    string s = "a";

    /*
    Cannot convert a string to int using a static cast:
    cout << static_cast<int>(s) << endl;   // Compiler error

    There are specific functions in C++ to allow us to convert
    strings to int, doubles etc
    */

    return 0;
}