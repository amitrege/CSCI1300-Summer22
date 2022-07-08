#include <iostream>
#include <string>
using namespace std;

struct StreetAddress
{
    int houseNum;
    string streetName;
    int n;
    int m;
    double c;
};

// 100 functions

void display(StreetAddress a)
{
    cout << "Printing out structure" << endl;
    cout << a.houseNum << endl;
    cout << a.streetName << endl;
    cout << a.n << endl;
    cout << a.m << endl;
    cout << a.c << endl;
    cout << endl;
}

int main() 
{
    StreetAddress theo;
    theo.houseNum = 1111;
    theo.streetName = "Engineering Drive";
    theo.n = 10;
    theo.m = 5;
    theo.c = 7;
    cout << theo.houseNum << " " << theo.streetName << endl;
    cout << endl;
    
    StreetAddress temp[6];
    //temp[0].houseNum = 10;
    for (int i=0; i< 6; i++)
    {
        temp[i].houseNum = 10;
        display(temp[i]);
    }

    //cout << theo << endl;
    return 0;
}