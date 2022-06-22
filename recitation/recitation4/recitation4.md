#### **CSCI 1300 CSC1: Starting Computing**
#### **Angel - Summer 2022**
#### **Recitation 4 - Week of June 20th, 2022**

# Table of contents
1. [Functions](#func)
2. [Pointers](#pointer_exp)
3. [Exercises](#exercises)
   1. [Question 1 - Pumpkin Patch Fertilizer](#pumpkin_app)
   2. [Question 2 - Remove Duplicates](#string)
   3. [Question 3 - Spot the Errors](#errors)
   4. [Question 4 - Pointer Arithmetic](#pointers)
4. [Deliverables](#deliverables)

# Functions <a name="func"></a>
This week in lecture we’re learning how to group together multiple statements in functions. Functions are a fundamental building block of programming. They tend to solve a general but narrow problem, they should be easily implemented and understood, and they can be reused. 

# Pointers <a name="pointer_exp"></a>
Pointers are special variables that storess address. Or you could think of them as pointing to an address (hence pointers).
Some important symobls: 
1. \* :This symbol has 2 functionalities, both declaring a pointer and dereferencing a pointer (very confusing)
	 1. Declaring a pointer: Just as it means it declares a variable as a pointer type 
	 2. Dereferencing a pointer, since pointers stores addresses when you dereference a address it gets the variable of the address that is stored in the pointer
2. & :This symbol gets the address of a variable.Remember that we said pointers store addresses? When a pointer stores the address of another variable, if you update the pointer value (derefrenced) you upate the variable as well.

Ex. 
```
int *ptr;
int x = 0;

ptr = &x; //ptr is being assigned address of x
*ptr += 5; //derefrence ptr and add 5 to the value

cout<<x<<endl; // x gets updated as well! Try it

```

# Exercises <a name="exercises"></a>

### 1. **Pumpkin Patch Fertilizer**. <a name="pumpkin_app"></a>
It’s near the end of September, and you’re a humble pumpkin farmer looking forward to making money as people flock to your fields to pick their own pumpkins for halloween. To make sure that your crop looks its best, you need to keep the pumpkins well fertilized. Design two functions to track the amount of fertilizer you purchase and use. Both functions should take in an amount for your current stock of fertilizer and an amount to be used or added into the stock, and then return your new fertilizer levels. 

**Functions ONLY, headers and int main will be provided in code runner**

Here are two function headers to get you started:

```cpp
double fertilize(double stock, double amount)
double restock(double stock, double amount)
```

You cannot fertilize pumpkins with more than what you have in your stock! Print out "Error: not enough fertilizer!" and return the current stock amount if that happens.
Here’s some example output (no user input):

-------------------------------
**Example 1**:
 ```cpp  
double stock = 100;
double amount = 20.5;
cout << restock(stock, amount) << endl;
```

**Output: 120.50**

---------------------------------

**Example 2**:
```cpp

double stock = 51;
double amount = 50;
cout << fertilize(stock, amount) << endl;
```
**Output: 1.00**

-----------------------------------

**Example 3**:
```cpp
double stock = 71.4;
double amount = 40;
double amount2 = 30;
cout << fertilize(restock(stock, amount), amount2) << endl;
```
**Output: 81.40**

-------------------------------------

**Example 4**:
```cpp
double stock = 71.4;
double amount = 40;
double amount2 = 30;
double restockedValue = restock(stock, amount);
cout << fertilize(restockedValue, amount2) << endl;
```
**Output: 81.40**

-------------------------------------
**Example 5**:
```cpp
double stock = 71.4;
double amount = 100;
cout << fertilize(stock, amount) << endl;
```
**Output: Error: not enough fertilizer!**

-------------------------------------

**1a**. Imagine what a sample run would look like. Think about at least two examples

*Sample run 1:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

*Sample run 2:*

-----------------------------

**1b**. Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions. When submitting to code runner, **ONLY** copy over the function.
<br>

### 2. **Remove Duplicates**. <a name="string"></a>
Your keyboard is having some technical difficulties unfortunately, you've been thinking of replacing it for a while but don't have the funds to do so. When you're trying to type, each key you press will get one or more of the same character. Create a function that removes all duplicate characters in an input string. The function will prompt user for an input, and then remove all duplicate characters. Note: The duplicated characters will always be consecutive. 

**Functions ONLY, headers and int main will be provided in code runner**

-------------------------------
**Example 1:**:
```
Please enter a string:
aabbcc
abc
```
---------------------------------
**Example 2:**:
```
Please enter a string:
aaggeee
age
```
---------------------------------
**Example 3:**:
```
Please enter a string:
heeellooo
helo
```
---------------------------------
**Example 4:**:
```
Please enter a string:


```
---------------------------------
Note: If a user enters a empty string, return a empty string
<br>

Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions. When submitting to code runner, **ONLY** copy over the function.
<br>

### 3. Spot the Errors <a name="errors"></a>
**a**
```cpp

#include <iostream>
#include <string>
using namespace std;

int address(string street, string apartment)
{
	string s = "You stay in APT " + apartment + " on " + street + " St.";
}

// Main function prints the address
int main()
{
   cout<<address("Pearl","123")<<endl;
}
```
**b**
```cpp

#include <iostream>
using namespace std;

int main()
{
cout << avg(8,13) << endl;
return 0;
}

int avg(int a, int b)
{
int x = (a+b) / 2.0;
return 0;
}

```

**c**
```cpp

#include <iostream>
#include <cmath>
using namespace std;

int pythagoras(int side1, int side2)
{
cout << "Enter side 1: " << endl;
cin >> side1;
cout << "Enter side 2: " << endl;
cin >> side2;

double hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));

		return hypotenuse;
}
int main()
{
cout << pythagoras(5,6) << endl;
return 0;
}

```

**d**
```cpp

#include <iostream>
using namespace std;

string concatenate( a="default", b);

int main()
{
cout << concatenate(‘csci’,1300) << endl;
return 0;
}

string concatenate(string a, string b)
{
string c = a + b;
		return c;
}

```

**e**
```cpp

#include <iostream>

using namespace std;

 void justKeepLooping(char letter);

 int main(){
     justKeepLooping(^);
     return 0;
 }

 void justKeepLooping(char letter){
     //prints out 5 ‘^’ characters each on a new line
     int i = 10;
     do{
         cout << letter << endl;
         i += 2;
     }while(i > 1)
     return;
	}
```

**f**
```cpp
#include <iostream>

 using namespace std;
 
 string hello();
 void kenobi(string name);
 
 int main(){
         hello();
         return 0;
 
 void hello(){
         cout << "Hello there!" << endl;;
         kenobi("Kenobi!");
     return;
 }
 
 void kenobi(string name){
         cin << "General " << name << endl;
     return;
 }

```

**g**
```cpp

#include <iostream>
	
double surprise(int input){
  string mysteryString = "surprise";
  input == input % 8;
  return mysteryString[input];
}

int main(){
  int input;
  char result;
  
  cout << "Enter a number:" << endl;
  cin > input;

  result = surprise(input);
  cout << result << endl;
  
  return 0;
	}
```

### 4. **Pointer Arithmetic**. <a name="pointers"></a>
```cpp
#include<iostream>
using namespace std; 

int main(){
	int *ptr; 
	int x; 
	double *doublePtr;
	double y;

	ptr = &x; 
	*ptr = 5;

	cout<< "x: " << x<<endl;
	cout<< "ptr: "<<*ptr<<endl; 

	y = 3.5;
	doublePtr = &y; 

	cout<<"doublePtr: "<<*doublePtr<<endl;
}
```

Questions: 
1. What does x output? ptr? 
2. What does doublePtr output? 
3. I added the following lines to the code
```
int **ptr2; 
ptr2 = &ptr;
*ptr += 5;
(**ptr2)++;
```
How could we print x using ptr2?



4. What is the value of x after adding the code in question 4?
5. What if I added the following line to the code

```
ptr = doublePtr;
```
would this work?

# Deliverables <a name="deliverables"></a>
Complete the Recitation 4 assignment on Canvas
