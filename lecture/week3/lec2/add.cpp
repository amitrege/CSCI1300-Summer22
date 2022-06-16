#include <iostream>

using namespace std;

//Function to add two doubles and return a double 
double add(double n1, double n2)
{
    // double sum = n1 + n2;
    return n1 + n2;
}

int main()
{   
    double num1 = 0, num2 = 0;
    cout << "Enter two numbers that need to be summed up: ";
    cin >> num1 >> num2;
    // double sum = add(num1, num2); // You can store the returned value
    cout << "Sum = " << add(num1, num2) << endl;



    return 0;
}