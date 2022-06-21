#### **CSCI 1300 CS1: Starting Computing**
#### **Summer 2022**
#### **Recitation 1 - Solutions**

1. Write an algorithm in pseudocode for the following program. The program will start by asking the user to enter 10 characters. Letters ‘a’, ‘e’, ‘i’, ‘o’, ‘u’ in the English alphabet are vowels. The program should count and display the total number of vowels among the 10 characters entered by the user. For example, if the user entered *ILoveSadie*, then the program should display:

`You entered 6 vowels`

<b>Pseudocode:</b>

- Ask user to input 10 characters
- Read 10 characters
- Declare and set numberOfVowelsSeen to zero
- For each character input by user
- If character is a vowel
- Increment numberOfVowelsSeen by one
- Print “You entered “ + numberOfVowelsSeen + “ vowels”

2. Write a simple program that prints **Hello, CSCI1300!** in cpp

<b>Answer:</b>

<pre><code>#include <iostream>
using namespace std;

int main() 
{
    cout << "Hello, CSCI1300!";
    return 0;
}
</code></pre>