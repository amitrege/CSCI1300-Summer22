#include <iostream>

using namespace std;

/*
    Problem:
    Input: user enters age in days
    output: print age in years, months and days

    Assume 1 year = 365 days and 1 month = 30 days
*/

int main() {
    int age_days;
    cout << "Enter user age in days: ";
    cin >> age_days;

    int years;
    years = age_days/365; //465/365 = 1 + 100 days, 465%365 = 1x365 + 100

    int rem_days = age_days % 365; //  1 year + 3 months + 10 days
    int months = rem_days/30; // or just do (age_days % 365)/30
                                // to reduce no of variables

    int days = age_days - 365*years -30*months;

    cout << "Age is " << years << " years " << months << " months " << days << " days."  << endl;



    return 0;
}
