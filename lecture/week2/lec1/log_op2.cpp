#include <iostream>
using namespace std;

int main()
{
    int y = -23;
    int x = 17;
    // logical operators &&, ||, !
    bool var1 = ( x < y || x != 0); 
    cout << "the value of var1 is: " << var1 << endl;


    // cout << "example evaluations" << endl;

    cout << "(0 < 200 && 200 < 100) = " << (0 < 200 && 200 < 100) << endl; // 0
    cout << "(0 < 200 || 200 < 100) = " << (0 < 200 || 200 < 100) << endl; // 1
    cout << "(0 < 200 || 100 < 200) = " << (0 < 200 || 100 < 200) << endl; // 1
    cout << "(0 < 200 < 100) = " << (0 < 200 < 100) << endl; // 0<200 && 200<100
    cout << "!(0 < 200) = " << !(0 < 200) << endl; // 0
    cout << "(-10 && 10 > 0) = " << (-10 && 10 > 0) << endl; // 1
    cout << "(0 < x && x < 100 || x == -1) = " << (0 < x && x < 100 || x == -1) << endl; // 1
    cout << "((!0 < x && x < 100) || x == -1) = " << ((!0 < x && x < 100) || x == -1) << endl; // 1 

    
    return 0;
}