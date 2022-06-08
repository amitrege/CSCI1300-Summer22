#### **CSCI 1300 CS1: Starting Computing: Recitation 2**
#### **Angel - Summer 2022**
#### **Week of June 6 2022**
<br/>

# Examples used in Recitation

## 1. Spot the errors of the following cpp program
a. The following program asks the user to input a number then prints the number
```cpp
#include iostream

int main()
{
  cout << "Please enter a number:"
  cin << x;
  cout << The number displayed is: << x <<endl;
  return;
}
```

b. The following program should ask the user to enter two numbers, then computes the sum
```cpp    
#include <iostream>
using namespace std;

int main()
{
  int total;
  int x1;
  cout << "Please enter a number: " << endl;
  cin >> x1;
  total = total + x1;
  cout << "total: " << total << endl; // trace message
  cout << "Please enter another number: " << endl;
  int x2;
  cin >> x2;
  total = total + x1;
  cout << "total: " << total << endl; // trace message
  cout << "The sum of the two numbers is " << total << "endl";    // trace message
  return 0;
}
```
Note the **trace messages (marked as "//trace message")** are inserted to show the current contents of the "total" variable.

c. I want to create a program that if my input is 5 then print "Hi five!", if my input is less than 5 print "You got this!", and if my input is greater than 5 print "Hello World"
```cpp
#include <iostream>
using namespace std;
int main()
{
  int input = 0; 
  cin >> input;
  if (input < 5)
  cout<<"You got this!"<<endl;
  else if(input = 5)
  cout<<"Hi five!"<<endl;
  else
  cout<<"Hello World"<<endl;
}
```

d.    
```cpp
// This checks what choice the user have picked
using namespace std;

int main()
{
    char choice = '1';
    switch (choice) {
    case 0:
	cout << "You picked choice 0" << endl;
	break;
    case 1:
	cout << "You picked choice 1" << endl;
	break;
    case 2:
	cout << "You picked choice 2" << endl;
	break;
    }

return 0;
}
```

e.    
```cpp
#include <iostream>
using namespace std;

int main()
{
    x,y = 0;

    if (x && y > 0)
    {
    	cout<< x + pow(y,sqrt(4)) <<endl; 
    }
    
    cout << y << endl
} 
```
# Boundary Conditions
### 2. Simple Program
Ask the user to enter a number between 1 - 10. If the number is less than 3, output the number. If the number is greater than 3 and less than 7, output the number times 2. If the number is greater than 7, ouput the number plus 5. 

 **2a**. Write an algorithm in pseudocode for the program above. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

  **2b**. Let’s draw a flowchart of the solution

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


  **2c**. Imagine how a sample run of your program would look like. Think about at least one example

*Sample run 1:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


  **2d**. Identify the values that you must test for. We call these values “boundary conditions”.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

  **2e**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

<br>



# Exercises for Recitation Quiz
## 1. Spot the errors

There are some errors in the following programs. List each error and what you need to do to fix it. 
Remember, one error might trigger other errors. So fix errors one at a time, then save, compile, and run the program again. You should try running multiple times, with different values for x1 and x2.

a. The following program should ask the user to enter two numbers and then print the sum. The program is available on github as [recitation2_spot_error_a.cpp](https://github.com/CSCI1300-StartingComputing/CSCI1300-Spring2022/tree/main/recitation/recitation2/code_snippets/) and also as a Coderunner question
```cpp
#include iostream

int main();
{
cout << "Please enter two numbers:"
cin << x, y;
cout << "The sum of << x << "and" << y
    << "is: " x + y << endl;
return;
}
```

*Errors:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

b. The following program should ask the user to enter two numbers, then it should compute and print the average. The program is available on github as [rec2_error_b.cpp](https://github.com/CSCI1300-StartingComputing/CSCI1300-Spring2022/tree/main/recitation/recitation2/code_snippets/) and also as a Coderunner question.
```cpp    
#include <iostream>
using namespace std;

int main()
{
int total;
int x1;
cout << "Please enter a number: " << endl;
cin >> x1;
total = total + x1;
cout << "total: " << total << endl; // trace message
cout << "Please enter another number: " << endl;
int x2;
cin >> x2;
total = total + x1;
cout << "total: " << total << endl; // trace message
total = total / 2;
cout << "The average of the two numbers is " << total << "endl";    // trace message
return 0;
}
```
Note the **trace messages (marked as "//trace message")** are inserted to show the current contents of the "total" variable.

*Errors:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

c.    
```cpp
// This program implements XOR
#include iostream
using namespace std;

//Set the variable value to 1 when x or y is 1
int main()
{				
    int x = 1,y=0,value;
    
    if (x == 1)
    { 
        if(y==0)
        value = 1; 

        else
        y == 0; 
     
    if(x==0)
    { 
        if(y==0)
        value = 0; 

        else
        value = 1;
    }
    
    cout < value < endl;
    return 0;
}
```

d.   
```cpp
#include <iostream>
using namespace std;

int main()
{
    int angle =40;
    if (x<90) { 
        cout<<"It is an acute angle." ;
    }
    elif(x=90) {
        cout<<"It is a right angle.";
    }
    else{
        cout<<"It is an obtuse angle.";
    }
}
```

e.    
```cpp
// This checks if a number between 0 and 5 is odd or not
using namespace std;

int main()
{
    char digit = '5';
    switch (digit) {
    case 0:
	cout << "It's neither even nor odd!" << endl;
	break;
    case 1:
	cout << "It's odd!"  << endl;
	break;
    case 2:
	cout << "It's even!" << endl;
	break;
    case 3:
	cout << "It's odd!"  << endl;
	break;
    case'4':
	cout << "It's even!" << endl;
	break;
    case 5:
	cout <<  It's odd!   << endl;
	break;
    }

return 0;
}
```
    
f.    
```cpp
#include <iostream>
using namespace std;

int main()
{
    x,y = 0;

    if (x && y > 0)
    {
	if (x > pow(y, sqrt(4)) { 
	    y = y + x; 
	}
	else (x <= pow(y, sqrt(4))) {
	    y = x - y; 
	}
	else {
	    y = 0;
	}
    }
    
    cout << y << endl
} 
```

<br>

### 2. Hydration app  <a name="app"></a>

  Your goal is to drink half a gallon or 64 fl oz every day but you aren’t great at remembering to do it! So you decide to create a hydration app that tracks your water intake every day and will alert you based on how much you drank for the day.
  The program first asks how much water you drank for the day, which is in fl oz and then displays a message based on whether you have hit your goal for the day.
  Next, it will also tell you how much water you have left to drink. 
  
  The following are the possible messages you will get based on your intake:<br/>
  
   1. If you’re drinking 32 fl oz or less, then you get
    
 ```
    "You’re very, very dehydrated! Get that water in! You have X fl oz left to drink."  
 ```
   2. If you’re drinking more than 32 fl oz but less than 64 fl oz, then you get
    
 ``` 
    “You’re doing great, but you’re still halfway to your goal! Get that water in! You have X fl oz left to drink”
 ```
   3. If you’re drinking 64 fl oz or more, then you get<br/>
 ```
    “You’ve hit your goal for the day! Great job getting hydrated!” 
 ```     
        
 
 Note that **X** is the amount of water left after subtracting your intake.  
 
  Example output(The * next to a line indicates user input)
  ```
    How much water did you drink today?(in fl oz)
  * 37
    You’re doing great, but you’re still halfway to your goal! Get that water in! You have 27 fl oz left to drink.
```
  **2a**. Write an algorithm in pseudocode for the program above. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

  **2b**. Let’s draw a flowchart of the solution

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


  **2c**. Imagine how a sample run of your program would look like. Think about at least two examples

*Sample run 1:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

*Sample run 2:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------
*Sample run 3:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


  **2d**. Identify the values that you must test for. We call these values “boundary conditions”.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

  **2e**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

<br>

