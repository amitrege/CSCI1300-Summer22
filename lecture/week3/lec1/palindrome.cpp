#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    cin >> s;

    // reverse a string
    // Functions avaliable to do this but we will do it without using any 
    // help

    cout << "Approach 1"<< endl;
    /*
    Reverse string and check if original is equal to reverse
    */
    string reverse = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        reverse = reverse + s[i];
    }
    cout << "Reversing string...... "<< reverse << endl;
    cout <<"------------------------------------------------" << endl;

    if (reverse == s){
        cout << s << " is a Palindrome"<< endl;
    }
    else{
        cout << s << " is not a Palindrome"<< endl;
    }
    cout <<"------------------------------------------------" << endl;

    cout << "\n\nApproach 2"<< endl;
    /*
    Start traversing the string from both the start and the front
    If you see that any of the characters along the way do not match,
    then string is not a palindrome
    */
    int i = 0;
    int j = s.length() - 1;
    while(i < j){
        if (s[i] != s[j]) {
            break;
        }
        i++;
        j--;
    }

    cout << "i: " << i << ", j: " << j << endl;

    if (i>=j) {
        cout << s << " is a Palindrome"<< endl;
    }
    else{
        cout << s << " is not a Palindrome"<< endl;
    }

    return 0;
}