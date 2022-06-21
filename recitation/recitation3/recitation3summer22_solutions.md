#### **CSCI 1300 CS1: Starting Computing**
#### **Summer 2022**
#### **Recitation 3**

# Table of contents
1. [Loops](#loops)
2. [Exercises](#exercises)
   1. [Converting For Loops Into While Loops](#loop-conversion)
   2. [Incrementing Variables](#incrementing)
   3. [Spot the errors](#spot)
   4. [Swapping Characters in a String](#swap-characters)
   5. [Adding Spaces Between Every Other Letter](#letter-spacing)
   6. [Printing An Equilateral Right Triangle](#triangle)
3. [Deliverables for Recitation](#deliverables) 

# Loops <a name="loops"></a>
Last week in lecture we learned about using loops: while, do while and for loops. Let's get some practice in with them today. 

# Exercises <a name="exercises"></a>

## 1. Converting For Loops Into While Loops <a name="loop-conversion"></a>

Convert the following ```for``` loop into into a ```while``` loop.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int sum = 0;
    for(int i=0; i < x; i++)
    {
        sum -= x;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
```  
**Solution:**
```cpp
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int sum = 0;
    int i = 0;
    
    while(i<x){
        sum -= x;
        i++;
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
```

---
## 2. Incrementing Variables <a name="incrementing"></a>
Write a program that asks users to enter an integer between 1 and 100, inclusive. The program should display whether the number is divisible by 3 and prompt the user for another number. The program should continue until the user enters a number outside of the range. When the user enters a number outside of the range, the program should display the total number of numbers entered and the number of inputs that are divisible by 3.

Example output:
<pre><code>Please enter an integer between 1 and 100:
<b>9</b>
divisible by 3
Please enter an integer between 1 and 100:
<b>93</b>
divisible by 3
Please enter an integer between 1 and 100:
<b>-1</b>
entries: 2
divisible by 3: 2
</code></pre>

**Implement your solution in C++.** Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do.

**Solution:**
```cpp
#include <iostream>
using namespace std;

int main() {

    int divisible = 0;
    int input = 1;
    int entries = 0;

    while(input>=1 && input<=100) {
        
        if(input%3==0) {
            divisible++;
            cout << "divisible by 3" << endl;
        }

        cout << "Please enter an integer between 1 and 100: " << endl;
        cin >> input;
        entries ++;
    }
    
    cout << "entries: " << entries-1 << endl;
    cout << "divisible by 3: " << divisible << endl;

}
```
---
## 3. Spot the errors <a name="spot"></a>
Let's try to spot some common errors and work through these exercises interactively via the Recitation 3 Coderunner on [Canvas](https://canvas.colorado.edu/courses/83771/assignments/1374900). 

a.    
```cpp
#include iostream
using namespace std;

int main();
{
    int x = 10;
    int sum = 0; 
    while(x >= 10) 
    {
        sum += x;
        x--;
    }
    cot << “Sum = “ << sum << endl;
    return 0
}
```
**Solution:**
```cpp
#include <iostream> // added angle brackets 
using namespace std;

int main() // eliminated semicolon
{
    int x = 10;
    int sum = 0; 
    while(x >= 10) 
    {
        sum += x;
        x--;
    }
    cout << "Sum = " << sum << endl; // cout was misspelled
    return 0; // added semicolon here
}
```

b.   
```cpp
#include <iostream>
using space std;

int main()
{
    int x = 10
    int sum = 0
    for(int i=0; i=x; i++);
    {
        sum += x;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
```

**Solution:**
```cpp
#include <iostream>
using namespace std; // corrected to "namespace" 

int main()
{
  int x = 10; // added semicolon here
  int sum = 0; // added semicolon here
  for(int i=0; i<=x; i++) // set condition to be less than or equal to, eliminated semicolon
  {
    sum += x;
  }
  cout << "Sum = " << sum << endl;
  return 0;
}
```


c.    
```cpp
#include <iostream>
using namespace std;

int main();
{
    int x = 10;
    int y = 5;
    int sum = 0;
    do; 
    {
        sum = x + y;
        cout << "Sum = " << sum << endl;
        x++;
        y++;
    } while sum <= 20
    return 0;
}
```
**Solution:**
```cpp
#include <iostream>
using namespace std;

int main() // eliminated semicolon
{
    int x = 10;
    int y = 5;
    int sum = 0;
    do // eliminated semicolon
    {
        sum = x + y;
        cout << "Sum = " << sum << endl;
        x++;
        y++;
    } while(sum <= 20); // placed condition in parentheses and added semicolon
    return 0;
}
```
    
d.    
```cpp
#include iostream
namespace std

int main()
{
    int x = 10;
    int y = 5;
    int sum = 0;
    while(sum <= 20);
    {
        sum = x + y;
        cout << "Sum = " << sum << endl;
        x++;
        y++;
    }
    return 0;
} 
```

**Solution:**
```cpp
  #include <iostream> // added angle brackets
  using namespace std; // added "using" and semicolon
  
  int main()
  {
      int x = 10;
      int y = 5;
      int sum = 0;
      while(sum <= 20) // eliminated semicolon
      {
          sum = x + y;
          cout << "Sum = " << sum << endl;
          x++;
          y++;
      }
      return 0;
      } 
  }
```

e.    
```cpp
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int sum = 0;
    for(i=0; i < x; i++)
    {
        sum += x
    }
    out << "Sum = " + sum << endl;
    return 0;
}
```
**Solution:**
```cpp
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int sum = 0;
    for(int i=0; i < x; i++)
    {
        sum += x; // added semicolon
    }
    cout << "Sum = " << sum << endl; // corrected to "cout"
    return 0;
}
```

f.    
```cpp
#include istream
using namespace std

int main()
{
    int x = 10;
    int sum = -40;
    int i;
    fore(i=0; i < x; i)
    <
        sum += x;
    >
    cout << "Sum = " << sum << end_l
    return 0;
}
```
**Solution:**
```cpp
#include <iostream> // added missing angle brackets and corrected to iostream
using namespace std; // added semicolon

int main()
{
    int x = 10;
    int sum = -40;
    for(int i=0; i < x; i++) // corrected "for", added missing increment operator on i
    { // changed angle to curly brace
        sum += x;    
    } // changed angle to curly brace
    cout << "Sum = " << sum << endl; // corrected to "endl" and added semicolon
    return 0;
}
```
---
## 4. Swapping Character Locations in a String <a name="swap-characters"></a>

Write a program that asks the user to enter a string (no longer than 15 characters), followed by asking for two numbers identifying which letters will be swapped. Your program should output the original string and the new string. For this program, you can assume the first letter is 0. 

**Note:** To allow spaces in the input string, use getline(cin, input), where 'input' is the name of your variable storing the input string.

Example output: 
<pre><code>Please enter a string: 
<b>hello world</b>
Which letters would you like to swap? (by index)
<b>0 5</b>
New string: ellohworld
</code></pre>  

**Implement your solution in C++.** Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do.

**Solution:**
```cpp
#include <iostream>
using namespace std;

int main() {

    string entry; 
    int idx1; 
    int idx2;

    cout << "Please enter a string: " << endl;
    getline(cin, entry);
    cout << "Which letters would you like to swap?" << endl;
    cin >> idx1; 
    cin >> idx2;

    char temp = entry[idx1];
    entry[idx1] = entry[idx2];
    entry[idx2] = temp;

    cout << "New string: " << entry << endl;
    return 0;
}
```
---
## 5. Adding Spaces Between Every Other Letter <a name="letter-spacing"></a>

Let's create a program that takes a string as user input and prints out the string with a space between every character. The resulting string will keep all characters from the original input. **Note**, it's okay if there is a space printed after the final character. In the example shown below, the entire string would be 12 characters long (the trailing space is not visible).

Example output (**bold** is user input)
<pre><code>Please enter a string:
<b>banana</b>
b a n a n a
</code></pre>

**Challenge**: What could we add to our code to eliminate the trailing space from being added so that we only have spaces between the individual characters in the string inputs? Consider the same example above, now we should only get a string that is 11 characters long with this change.

**Implement your solution in C++.** Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. 

**Solution:**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userInput;
    string output = "";
    cout << "Please enter a string: " << endl;
    cin >> userInput;
    int len = static_cast<int>(userInput.length());
    for (int i=0; i < len; i++) 
    {
        output = output + userInput[i] + " ";
    }
    cout << output << endl;
    
    return 0;
}
```
---
## 6. Printing An Equilateral Right Triangle <a name="triangle"></a>

Let’s create a program that takes a side length as user input and prints out a right equilateral triangle of asterisks (“*”) with that side length. Non-positive side lengths should print “Invalid Input” and return, while a side length of zero should print nothing (i.e. a triangle with side length zero). Example outputs for a few test cases are given below.

Example output (**bold** is user input)
<pre><code>Enter the triangle side length:
<b>1</b>
*
</code></pre>

Example output (**bold** is user input)
<pre><code>Enter the triangle side length:
<b>5</b>
*
**
***
****
*****
</code></pre>

**Implement your solution in C++.** Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. 

**Solution:**
```cpp
#include <iostream>
using namespace std;

int main()
{
    int sideLength;
    cout << "Enter the triangle side length:" << endl;
    cin >> sideLength;
    if (sideLength < 0)
    {
        cout << "Invalid input" << endl;
        return -1;
    }
    for(int i=0; i < sideLength; i++)
    {
        for(int j=0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
```
# Deliverables for Recitation <a name="deliverables"></a>
Complete the Recitation 3 assignment on [Canvas](https://canvas.colorado.edu/courses/83771/assignments/1374900).
