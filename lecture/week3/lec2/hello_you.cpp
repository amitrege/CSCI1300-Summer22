#include<iostream>
#include<string>

using namespace std;

// Note return type is void
// Since we are just printing to the screen, we do not have a value to
// return to the main function. 
// Think of return values as something you can set a variable with
// You cannot set a variable to the output of a 'cout' right? 
void print_hello_you(string s);

int main() {

    string name;
    cout << "Enter your name:" << endl;
    cin >> name;

    print_hello_you(name);

    return 0;
}

void print_hello_you(string s) {
    cout << "Hello "<< s << "!" << endl;
    
}