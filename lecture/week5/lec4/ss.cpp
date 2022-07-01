#include<iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string str = "January 24, 1973";

    istringstream strm1(str);

    string month;
    int date;
    string comma;
    int year;

    strm1 >> month >> date >> comma >> year;

    cout << "Month: " << month << endl;
    cout << "Date: " << date << endl;
    cout << "Comma: " << comma << endl;
    cout << "Year: " << year << endl;
    cout << endl;



    /*
    Note we are only able to store the comma in a separate variable because
    we have a different type come before it (int instead of string)
    
    Therefore, strm1 with the >> operator is able to distinguish between 
    the comma and the number 

    If the preceding word were also a string (of alphabets) the comma
    would be folded into the previous variable

    Run the example below
    */

    string s = "Harry Potter, PhD";

    string first_name;
    string last_name;
    string qualification;

    istringstream strm2(s);

    strm2 >> first_name >> last_name >> comma >> qualification;

    cout << "First name: " << first_name << endl;
    cout << "Last name: " << last_name << endl;
    cout << "Comma: " << comma << endl;
    cout << "Qualification: " << qualification << endl;

    /*
    There is no simple way to fix this with string streams
    
    You'd have to split the last_name variable manually into
    the last name and comma using a function like .substr()
    */
}