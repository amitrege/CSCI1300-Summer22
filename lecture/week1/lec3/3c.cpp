#include <iostream>

using namespace std;

/*
    Problem:
    Input: user enters current population of US andthe world
    output: print percentage of world population is that US population

*/

int main() {
    int us_pop;
    long long int world_pop;

    cout << "Enter US population" << endl;
    cin >> us_pop;

    cout << "Enter world population" << endl;
    cin >> world_pop;

    cout << "Ths US population is " << (static_cast<double>(us_pop)/world_pop) * 100 << "% of world population" << endl;

    // Answer we get is 0 since (us_pop/world_pop) is 0 for 2 integer types
    // Two ways to solve this:
    // Store one of these in a floating point type variable
    // Cast of of thee to a floating point number
    // Prefer the casting method since it makes the conversion explicit
    // rather than implicit

    return 0;
}
