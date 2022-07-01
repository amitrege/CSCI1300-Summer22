#include<iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[]) {
    cout << "You have entered " << argc << " argument(s):" << "\n";
  
    for (int i = 0; i < argc; ++i) {
        cout << argv[i] << endl;
    }
    
    // argv[0] is always the name of the program
    // argv[1] onwards you start getting into the arguments you passed

    // Note all of these above arguments are of type char * (a C-style string)

    // You need to convert these to integers (or the appropriate type)
    // before use


    if (argc >= 3) {
        int a = stoi(argv[1]);
        int b = stoi(argv[2]);
        cout << stoi(argv[1]) + stoi(argv[2]) << endl;
    }

    return 0;
}