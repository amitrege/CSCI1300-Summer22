#### **CSCI 1300 CS1: Starting Computing: Homework 4**
#### **Rege - Summer 2022**
#### **Due: Saturday, July 2nd, by 11.59pm MST**

<br/>

# Table of contents
# Table of contents
1. [Objectives](#objectives)
2. [Background](#background)
3. [Testing Functions](#tests)
    1. [Void functions with printed output](#void)
    2. [Non-void functions returning bool or int](#non-void-bool-int)
    3. [Non-void functions returning double](#non-void-double)
    4. [Functions manipulating arrays](#test-function-array)
4. [Questions](#questions)
    1. [Question 1](#question1)
    2. [Question 2a](#question2a)
    3. [Question 2b](#question2b)
    4. [Question 3](#question3)
    5. [Question 4](#question4)
    6. [Question 5](#question5)
    7. [Extra Credit](#extracredit)
5. [Submission Instructions](#submissions)
    1. [Checklist](#checklist)
    2. [Grading Rubric](#rubric)

# Objectives <a name="objectives"></a>

* Understand arrays.
* Be able to pass arrays to functions


# Background <a name="background"></a>
## Arrays
An array is a data structure which can store primitive data types like `float`, `int`, `char`, and `boolean`, and `string`.
Arrays have both a `type` and a `size`.

**How to declare arrays**
```cpp
data_type array_name[declared_size];
bool myBooleans[10];
string myStrings[15];
int myInts[7];
```

**How to initialize arrays (method 1)**

```cpp
bool myBooleans[4] = {true, false, true, true};
```
If you do not declare the size inside the square brackets, the array size will be set to however many entries you provide on the right.
```cpp
bool myBooleans[] = {true, false, true}; // size = 3
```
Note: the size specified in the brackets needs to match the number of elements you wrote in the curly brackets.

*Example 1*

When the specified size is larger than the actual number of elements, the elements provided in the curly brackets will be the first several elements in the array, while the additional elements will be filled with default values. If it’s an integer/double array, the default values are zero, while if it’s a string array, the default values are empty strings.

```cpp
#include <iostream>
using namespace std;
int main() 
{
    int intArray[5] = {1,2,3};
    for (int i = 0; i < 5; i ++) 
    {
        cout << intArray[i] << “ ”;
    }
}
```

Output:
```
1 2 3 0 0
```

*Example 2*

When the specified size is smaller than the actual number of elements, there will be a compilation error.

```cpp
#include <iostream>
using namespace std;
int main() 
{
    int intArray[3] = {1,2,3,4,5};
}
```

Output:
```
error: excess elements in array initializer
int intArray[3] = {1,2,3,4,5};
                         ^
1 error generated.
```

* **How to Initialize Arrays (Method 2)**
You can also initialize elements one by one using a for or a while loop: 
```cpp
int myInts[10];
int i = 0;
while (i < 10) 
{
    myInts[i] = i;
    i++;
}
//{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
```
* **How to Access Elements in an Array**
We have essentially already had practice with accessing elements in an array, as in C++, string is an array of characters.
You can access elements in arrays using the same syntax you used for strings:
```cpp
string greetings[] = {"hello", "hi", "hey", "what’s up?"};
cout << greetings[3] << endl;
```
Output
```
hey
```

Arrays can be iterated in the same way we iterated over strings last week. Below we are iterating through an array of strings:
```cpp
string greetings[] = {"hello", "hi", "hey", "what’s up?"};
int size = 4;
int i = 0;
while (i < size)
{
    cout << greetings[i] << endl;
    i++;
}
```
Output:
```
hello
hi
hey
what's up?
```

### Passing arrays to functions
* **Passing By Value**
Up until now, when calling functions, we have always passed by value. When a parameter is passed in a function call, a new variable is declared and initialized to the value passed in the function call.

Observe that the variable `x` in main and variable `x` in addOne are separate variables in memory. When `addOne` is called with `x` on line 10, it is the value of `x` (i.e. 5) that is passed to the function. This value is used to initialize a new variable `x` that exists only in addOne's scope. Thus the value of the variable `x` in main's scope remains unchanged even after the function `addOne` has been called.

```cpp
void addOne(int x)
{
    x = x + 1;
    cout << x << endl;
}

int main()
{
    int x = 5;
    cout << x << endl;
    addOne(x);
    cout << x << endl;	
}
```

Output:
```
5
6
5
```

* **Passing By Reference**
Arrays, on the other hand, are passed by reference (to the original array’s location in the computer’s memory). So, when an array is passed as a parameter, the original array is used by the function.
Observe that there is only one array `X` in memory for the following example. When the function `addOne` is called on line 10, a reference to the original array `X` is passed to `addOne`. Because the array `X` is passed by reference, any modifications done to `X` in `addOne` are done to the original array. These modifications persist and are visible even after the flow of control has exited the function and we return to main.

```cpp
void addOne(int X[])
{
   X[0] = X[0] + 1;
   cout << X[0] << endl;
}
int main()
{
    int X[4] = {1, 5, 3, 2};
    cout << X[0] << endl;
    addOne(X);
    cout << X[0] << endl;	
}
```

Output:
```
1
2
2
```

When we pass a one-dimensional array as an argument to a function we also provide its length. For two-dimensional arrays, in addition to providing the length (or number of rows), we will also assume that we know the length of each of the subarrays (or the number of columns). A function taking a two-dimensional array with 10 columns as an argument then might look something like this:
```cpp
void twoDimensionalFunction(int matrix[][10], int rows){ … }
```

### Multidimensional arrays
In C++ we can declare an array of arrays known as a multidimensional array. Multidimensional arrays store data in tabular form. 
* **How to Declare Multidimensional arrays**
```cpp
data_type array_name[dimension_1][dimension_2]....;
int myInts[7][5];
bool myBooleans[10][15][12];
string myStrings[15][10];
```
* **How to Initialize Multidimensional  arrays  (Method 1)**
```cpp
int myInts[2][2] = {1, 2, 3, 4};
```
The 2D array in this case will be filled from left to right from top to bottom.
```cpp
int myInts[2][2] = {{1, 2}, {3, 4}} 
```
	You can also initialize a 2D array by explicitly separating the rows as shown above. 

* **How to Initialize Multidimensional  arrays  (Method 2)**
You can also initialize elements using nested loops: 
```cpp
int myInts[2][2];
for(int i=0; i < 2; i++)
{
    for(int j=0; j < 2; j++)
    {
        myInts[i][j] = i + j;
    }
}
```
The above code will create the following 2D array {{0, 1}, {1, 2}}.

* **How to Access Elements in a Multidimensional array**

You can use  `myInts[i][j]` to access the ith row and jth column of a 2D array 

Multidimensional arrays can be iterated using nested loops as shown below:
```cpp
int myInts[2][2] = {{0, 1}, {1, 2}};
int res = 0;
for(int i=0; i < 2; i++)
{
    for(int j=0; j < 2; j++)
    {
        res = res + myInts[i][j];
    }
}
    cout << “Result is “ << res; 
```
Output:
```
Result is 4
```

## **Vectors**

A vector is a template class that uses all of the syntax that we used with vanilla arrays, but adds in functionality that relieves us of the burden of keeping track of memory allocation for the arrays. It also introduces a bunch of other features that makes handling arrays much simpler.

First things first. We need to include the appropriate header files to use the vector class.
```cpp
#include <vector>
```
We can now move on to declaring a vector. This is general format of any vector declaration:
```cpp
vector <datatype_here> name(size);
```
The *size* field is optional. Vectors are dynamically-sized, so the size that you give them during initialization isn't permanent - they can be resized as necessary.

You can access elements of a vector in the same way you would access elements in an array, for example **array[4]**. Remember, indices begin from 0.

You can find a quick reference to the functions available in C++ vector class [here](https://www.cplusplus.com/reference/vector/vector/vector/), but following are the ones you will need in this week:

* ```size()``` return the size of a vector
* ```at()``` takes an integer parameter for index and returns the value at that position

Adding elements to the vector is done primarily using two functions

* ```push_back()``` takes in one parameter (the element to be added) and appends it to the end of the vector.
```cpp
vector <int> vector1; // initializes an empty vector
vector1.push_back(1); //Adds 1 to the end of the vector. 
vector1.push_back(3); //Adds 3 to the end of the vector. 
vector1.push_back(4); //Adds 4 to the end of the vector. 
cout<< vector1.size(); //This will print the size of the vector - in this case, 3.

// vector1 looks like this: [1, 3, 4]
```

* ```insert()``` can add an element at some position in the middle of the vector.
```cpp
// vectorName.insert(vectorName.begin() + position, element)

vector1.insert(vector1.begin() + 1, 2);
cout << vector1.at(1) << endl; // 2 is at index=1

// vector1 looks like this: [1, 2, 3, 4]
```
Here, the ```begin``` function returns an iterator to the first element of the vector. You can think of it as an arrow pointer that points to the memory location just before the first element. The ```begin()``` would thus refer to the first element and ```begin()+k``` would refer to the kth element in the vector, starting at 0.

Elements can also be removed.

* ```pop_back()``` deletes the last element in the vector
* ```erase()``` can delete a single element at some position
```cpp
// vector_name.erase(vector_name.begin() + position)

vector1.erase(vector1.begin() + 0);
cout << vector1.at(0) << endl; //2 is at index=0

// vector1 looks like this: [2, 3, 4]
```

# Testing functions <a name="tests"></a>

Every C++ program you write should include a main function that tests the function you wrote. 
There will be 3 different types of test cases you should be expected to write depending on the return type of the function.
Listed below is how we expect you to test different types of functions. The process will be different for
if you are testing a `void` function, non-void functions that return an `int` or `bool`, and non-void functions 
that return a `double`.

#### 1. Void Functions with printed output <a name="void"></a>

For **void** functions that have printed output (i.e. functions that use `cout` to print to the terminal), call the testing function in the main function. Your tests should include the expected output in comments.

See the sample code below:
```c++
void checkDiscount(double discount) {
    if (discount >= 50) {
        cout << "Great discount!" << endl;
    } else {
        cout << "Not a great discount." << endl;
    }
    return;
}
int main() {
    // test 1 for checkDiscount
    // expected output: "Great discount!"
    checkDiscount(82.7);
    
    // test 2 for checkDiscount
    // expected output: "Not a great discount."
    checkDiscount(22);
    
    return 0;
}
```
_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._


<br>


#### 2. Non-Void Functions returning bool or int <a name="non-void-bool-int"></a>

For **non-void** functions that return a **bool or int**, use an **assert statement** 
from the **cassert** header (`#include <cassert>`) with a conditional expression.

Assert tests contain a conditional expression which will be true unless there is a bug in the program.
If the conditional expression evaluates to false, then your program will terminate and show an error message.

For the purpose of this project, functions that return a `bool` or `int` can be compared to a specific value using the equality operator `==`.

Your test will look something like this:

`assert(<function call> == <value to compare to>);`

* `<function call>` is where you will call the function you want to test with its function parameters.
* `<value to compare to>` is the value you expect the function to return.
* `==` is the equality operator, and it compares the equality of both sides of itself. 

See the sample code below:
```c++
#include <iostream>
#include <cassert>
using namespace std;
int add_(int num1, int num2)
{
    // add num1 and num2 before returning
    return num1 + num2;
}
// isDrivingAge returns true if the given age passed as a parameter is greater than 16,
// else it returns false.
bool isDrivingAge(int age)
{
    if (age >= 16)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    // test 1 for add_
    assert(add_(5, 6) == 11);
    // test 2 for add_
    assert(add_(10, 10) == 20);
    // test 3 for drivingAge
    assert(isDrivingAge(17) == true);
    // test 4 for drivingAge
    assert(isDrivingAge(14) == false);
}
```
_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._

<br>


#### 3. Non-Void Functions returning double <a name="non-void-double"></a>

For **non-void** functions that return a **double**, use an **assert statement**
    from the **cassert** header (`#include <cassert>`) with a conditional expression and include the following function in your program.
```c++
/**
 * doubles_equal will test if two doubles are equal to each other within two decimal places.
 */
bool doubles_equal(double a, double b, const double epsilon = 1e-2)
{
    double c = a - b;
    return c < epsilon && -c < epsilon;
}
```
Because the `double` type holds so much precision, it will be hard to compare the equality of a function that returns a 
double with another double value. To overcome this challenge, we can compare `double` values within a certain range 
of precision or decimal places. The function above compares the equality of two values `a` and `b` up to two decimal places.
This function returns `true` if the values `a` and `b` are equal with each other up to two decimal places.

You will be expected to use this function in conjunction with `assert` statements to test functions that return 
the type double.

Your test will look something like this: 

`assert(doubles_equal(<function call>, <value to compare to>));`

 * `<function call>` is where you will call the function you want to test with its function parameters 
 * `<value to compare to>` is the `double` value you expect the function to return.


See the sample code below:
```c++
#include <iostream>
#include <cassert>
using namespace std;
/**
 * doubles_equal will test if two doubles are equal to each other within two decimal places.
 */
bool doubles_equal(double a, double b, const double epsilon = 1e-2)
{
    double c = a - b;
    return c < epsilon && -c < epsilon;
}
/**
 * reciprocal returns the value of 1 divided by the number passed into the function.
 */
double reciprocal(int num)
{
    return 1.0 / num;
}
int main()
{
    // test 1 for reciprocal
    assert(doubles_equal(reciprocal(6), 0.16));
    // test 2 for reciprocal
    assert(doubles_equal(reciprocal(12), 0.083));
}
```
For test 1, `reciprocal(6)` is being called, and we expect the function to return the value `0.16`. 
The return value of `reciprocal(6)` and `0.16` is passed in as parameters to the `doubles_equals` function,
which will then return `true` if these two values are equal or `false` if they are not.

_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._

<br>

#### 4. Functions manipulating arrays <a name="test-function-array"></a>

Functions which manipulate arrays passed as arguments can be tested by asserting on individual elements of the array after calling the function. This works even for `void` functions because arrays are passed by reference; even if the function doesn't return anything, the array in the function is the same array in memory as the one outside the scope of your function.

Note that if the array is an array of `float` or `double`, the `doubles_equal` function described [here](#non-void-double) should be used to assert on individual array elements.

See the sample code below:
```cpp
#include<iostream>
#include<cassert>
using namespace std;

/**
 * Add one to each element of the array. 
 */
void addOneToArrayElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] + 1;
    }
}
 
int main() {
    // test 1 for addOneToArrayElements
    int test1Arr[3] = {1, 2, 3};
    addOneToArrayElements(test1Arr, 3);
    assert(test1Arr[0] == 2);
    assert(test1Arr[1] == 3);
    assert(test1Arr[2] == 4);
    
    // test 2 for addOneToArrayElements
    int test2Arr[3] = {8, 10};
    addOneToArrayElements(test2Arr, 2);
    assert(test2Arr[0] == 9);
    assert(test2Arr[1] == 11);
}
```
_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._


<br>

# Questions <a name="questions"></a>
## Question 1 (6 points): Array Statistics <a name="question1"></a> <br>

Alice is trying to monitor her weekly spending on groceries. She is actively working on looking at her bills each week, figure out where she spends the most, her total spending each week, and her average spending each week. To help Alice work towards this goal, write three functions: **min()**, **sum()**, and **average()**. All three functions take two parameters: **an array of doubles** and **the number of elements in the array**. Then, they make the following computations: 
* min() - returns the minimum value in the array
* sum() - returns the sum of all the values in the array
* average() - returns the average of all the values in the array 

You may assume that the array will be non-empty.

*Function specifications:*

Function 1: Finding the highest grocery expense

* **Name:** min()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* arr `double`: The input array containing Alice's grocery expenses
 	* size `int`: The number of elements stored in the array
* **Return Value:** `double`: The minimum value in the array 

Function 2: Computing the total grocery expense

* **Name:** sum()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* arr `double`: The input array containing Alice's grocery expenses
 	* size `int`: The number of elements stored in the array
* **Return Value:** `double`: The sum of all the values in the array 

Function 3: Computing the average grocery expense

* **Name:** average()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* arr `double`: The input array containing Alice's grocery expenses
 	* size `int`: The number of elements stored in the array
* **Return Value:** `double`: The average of all the values in the array 


**Sample run 1:**

Function Call
```cpp
double arr[] = {1.24, 5.68, 3.456}
int len = 3;
cout << "Min: " << fixed << setprecision(3)<< min(arr, len) << endl;
cout << "Sum: " << fixed << setprecision(3) << sum(arr, len) << endl;
cout << "Avg: " << fixed << setprecision(3) << average(arr, len) << endl;
```
Output
```
Min: 1.240
Sum: 10.376
Avg: 3.459
```
**Sample run 2:**

Function Call
```cpp
double arr[] = {0};
int len = 1;
cout << "Min: " << fixed << setprecision(3)<< min(arr, len) << endl;
cout << "Sum: " << fixed << setprecision(3) << sum(arr, len) << endl;
cout << "Avg: " << fixed << setprecision(3) << average(arr, len) << endl;
```
Output
```
Min: 0.000
Sum: 0.000
Avg: 0.000
```
Your file should be named arrayStats.cpp and should also include a main function that tests your new min(), sum() and average() functions. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **min(), sum() and average() functions** into the answer box for question 1.


## Question 2a (6 points): Insert After <a name="question2a"></a>

Sam designs cool coffee mugs with unique stylized words, where all the consonants have a capitalized versions next to them. For example, if the string is "hello", Sam's mugs will have "hHelLlLo." 

You can help Sam in two steps. Let's look at the first step. Write a function **insertAfter()** that takes five parameters and inserts a specific character **right after a specific index**.  

*Function specifications*

* **Name:** insertAfter()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* inputCharacters `char`: The array containing characters
 	* numElements `int`: The number of elements that are *currently* stored in the array
 	* size `int`: The number of elements that can be stored in the array
 	* index `int`: The location to insert a new character. Note that the new character should be inserted *after* this location.
 	* charToInsert `char`: The new character to be inserted into the array
* **Return Value:** `bool`: 
	* True: If the character is successfully inserted into the array 
	* False:
		* If the array is full 
		* If the index value exceeds the size of the array


**Sample run 1:**
Function Call
```cpp
int size = 5;
char inputCharacters[size] = "cat";
int numElements = 3;
int index = 2;
char charToInsert = 's';
// result contains the value returned by insertAfter
bool result = insertAfter(inputCharacters, numElements, size, index, charToInsert);
// print result
cout << "Function returned value: "<< result << endl;
// print array contents
for(int i = 0; i < size; i++)
{
    cout << inputCharacters[i];
}
```
Output
```
Function returned value: 1
cats
```

**Sample run 2**
Function Call
```cpp
int size = 5;
char inputCharacters[size] = "Boo";
int numElements = 3;
int index = 0;
char charToInsert = 'l';
// result contains the value returned by insertAfter
bool result = insertAfter(inputCharacters, numElements, size, index, charToInsert);
// print result
cout << "Function returned value: "<< result << endl;
// print array contents
for(int i = 0; i < size; i++)
{
    cout << inputCharacters[i];
}
```
Output
```
Function returned value: 1
Bloo
```

**Sample run 3** 
Function Call
```cpp
int size = 10;
char inputCharacters[size] = "Boooooooo!";
int numElements = 10;
int index = 9;
char charToInsert = '!';
// result contains the value returned by insertAfter
bool result = insertAfter(inputCharacters, numElements, size, index, charToInsert);
// print result
cout << "Function returned value: "<< result << endl;
// print array contents
for(int i = 0; i < size; i++)
{
    cout << inputCharacters[i];
}
```
Output
```
Function returned value: 0
Boooooooo!
```

Your file should be named insertAfter.cpp and should also include a main function that tests your insertAfter() function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **insertAfter() function** into the answer box.


## Question 2b (10 points): Insert Consonants <a name="question2b"></a>

Now, let's look at the second step. Write a function **insertConsonants()** that takes four parameter and inserts capitalized versions of  consonants. The function will find consonants and insert capitalized versions of them **right after the consonant**. Once you find a consonant,  use the **insertAfter()** function from the previous subquestion to add a capitalized consonant character. The function should return the new number of characters in the array. In this exercise, a consonant is any character that is not  a, e, i, o, or u. 
**Note**
	* If the array is already full or if the number of characters that need to be added in the array in addition to the current number of characters exceeds the total size of the array, the array should remain unchanged. 
	* Assume all inputs are lowercase alphabets.

**Hint:** How far away is the capitalized version of a letter on the ASCII table?

*Function specifications* 

* **Name:** insertConsonants()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* inputCharacters `char`: The array containing characters
 	* numElements `int`: The number of elements that are *currently* stored in the array
 	* size `int`: The number of elements that can be stored in the array
 	* numConsonants `int`: The number of elements in the array that are consonants
* **Return Value:** `int`: 
	* The number of elements in the array after the capitalized consonants are inserted into the array
	* The *original* number of elements in the array if all the capitalized consonants cannot be inserted into the array


**Sample run 1:**
Function Call
```cpp
int size = 5;
char inputCharacters[size] = "cat";
int numElements = 3;
int numConsonants = 2;
// updating numElements with the updated value returned by insertConsonants
numElements = insertConsonants(inputCharacters, numElements, size, numConsonants);
// print numElements
cout << "Function returned value: " << numElements << endl;
// print array contents
for(int i = 0; i < size; i++)
{
    cout << inputCharacters[i];
} 
```
Output
```
Function returned value: 5
cCatT
```

**Sample run 2**
Function Call
```cpp
int size = 12;
char inputCharacters[size] = "boulder";
int numElements = 7;
int numConsonants = 4;
// updating numElements with the updated value returned by insertConsonants
numElements = insertConsonants(inputCharacters, numElements, size, numConsonants);
// print numElements
cout << "Function returned value: " << numElements << endl;
// print array contents
for(int i = 0; i < size; i++)
{
    cout << inputCharacters[i];
} 
```
Output
```
Function returned value: 11
bBoulLdDerR
```

**Sample run 3** 
Function Call
```cpp
int size = 9;
char inputCharacters[size] = "apples";
int numElements = 6;
int numConsonants = 4;
// updating numElements with the updated value returned by insertConsonants
numElements = insertConsonants(inputCharacters, numElements, size, numConsonants);
// print numElements
cout << "Function returned value: " << numElements << endl;
// print array contents
for(int i = 0; i < size; i++)
{
    cout << inputCharacters[i];
} 
```
Output
```
Function returned value: 6
apples
```

Your file should be named insertConsonants.cpp and should also include a main function that tests your insertConsonants() function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **insertConsonants() function** into the answer box.


## Question 3 (10 points): Splitting a String <a name="question3"></a>

When you’re processing data, it’s useful to break up a text string into pieces using a delimiter. Write a function **split()** that takes a string, splits it at every occurrence of a delimiter, and then populates an array of strings with the split pieces, up to the provided maximum number of pieces. 

*Function specifications:*

* **Name:** split()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* inputString `string`: The text string containing data separated by a delimiter
 	* separator `char`: The delimiter marking the location where the string should be split up
 	* arr `string`: The array that will be used to store the input text string's individual string pieces
 	* size `int`: The number of elements that can be stored in the array
* **Return Value:** `int`: The number of pieces the input text string was split into 

**Note:**

* No input will have delimiters in the beginning or the end of the string. (Eg: ",apple, orange" OR "apple, orange,")
* No input will have multiple delimiters added consecutively. (Eg: "apple,,,orange,banana")
* If the delimiter character is not found, then the function returns 1 and the entire string is placed in the array as the first element. 
* If the string is split into more pieces than the size of the array (the last parameter), then the function returns -1. The array should be filled with as many pieces of the split string as is possible.
* If an empty string is provided then return 0.

**Sample run 1:**

Function Call
```cpp
string testcase = "ABCDEFG";
char separator = ' ';
int size = 3;
string arr[size];
// numSplits is the value returned by split
int numSplits = split(testcase, separator, arr, size);
cout << "Function returned value: " << numSplits << endl;
cout << "arr[0]:"<< arr[0] << endl;
```
Output
```
Function returned value: 1
arr[0]: ABCDEFG
```

**Sample run 2:**

Function Call
```cpp
string testcase = "RST,UVW,XYZ";
char separator = ',';
int size = 3;
string arr[size];
// numSplits is the value returned by split
int numSplits = split(testcase, separator, arr, size);
cout << "Function returned value: " << numSplits << endl;
for (int i=0 ;i < size; i++){
  cout << "arr["<< i << "]:" << arr[i] << endl;
}
```
Output
```
Function returned value: 3
arr[0]:RST
arr[1]:UVW
arr[2]:XYZ
```

**Sample run 3:**

Function Call
```cpp
string testcase = "Bangkok,Berlin,Birmingham,Bogota,Busan,Baton Rouge,Beaumont,Boise,Budapest";
char separator = ',';
int size = 5;
string arr[size];
// numSplits is the value returned by split
int numSplits = split(testcase, separator, arr, size);
cout << "Function returned value: " << numSplits << endl;
for (int i=0 ;i < size; i++){
  cout << "arr["<< i << "]:" << arr[i] << endl;
}
```
Output
```
Function returned value: -1
arr[0]:Bangkok
arr[1]:Berlin
arr[2]:Birmingham
arr[3]:Bogota
arr[4]:Busan
```
Your file should be named splitString.cpp and should also include a main function that tests your split() function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **split() function** into the answer box.

## Question 4 (14 points): flood map <a name="question4"></a>
The City of Boulder is trying visualize water levels to help the public be aware of rising water levels in the creek. To help them create visualizations, write a function **floodMap()** that prints out a “map” of which points in the array are below or above the water level. The function takes three parametsr: a two-dimentional array where each element indicates the height of the terrain at a particular point (assume that there are 4 columns), number of rows, and the current water level. Each point at or below the water level will be represented with a `*` and each position above the water level will be represented with an underscore `_`. 

*Function specifications*
	
* **Name:** floodMap()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* map `double`: The two-dimensional array of `4` columns containing water distribution data
 	* rows `int`: The number of rows in the array
 	* waterLevel `double`: The current water level
* **Return Value:** No return value	
* The function should print a flood map as described below.
* The function should not print anything if the number of rows are zero.


**Sample run 1:**

Function call
```cpp
double map[4][4] = {{5.9064, 15.7541, 6.11483, 11.3928}, 
		{16.8498, 5.736, 9.33342, 6.36095}, 
		{3.18645, 16.935, 4.7506, 9.63635}, 
		{2.22407, 0.815145, 0.298158, 13.466}};
floodMap(map, 4, 9.3);
```
Output
```
*_*_
_*_*
*_*_
***_
```

**Sample run 2:**

Function call
```cpp
double map[4][4] = {{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11},
		{12, 13, 14, 15}};
floodMap(map, 4, 5.5);
```
Output
```
****
**__
____
____
```

Your file should be named floodMap.cpp and should also include a main function that tests your floodMap() function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **floodMap() function** into the answer box.

## Question 5 (14 points): Vector functions <a name="question5"></a>
Write a program (i.e. `main` function) that asks the user to repeatedly enter positive integers and stop when the user enters -1. If a different negative number (or zero) is entered, the program should output “The number should be a positive integer or -1.” and then prompt for the next number.

You need to use a vector in this question. At the beginning of the program, the vector is empty. Then, as the user enters values, the vector will be updated based on the following conditions **in this order (1, 2, 3, 4):** 
1. If the vector is empty, insert the user input value into the vector 
2. If the vector is not empty and the input value is divisible by 7, then remove an
element from the front of the vector  
3. If the vector is not empty and the user input value is divisible by 5, then remove an
element from the end of the vector 
4. Otherwise (if not divisible by 7 or 5), insert the input value at the end of the vector. 

**Hint:** Notice that numbers can be divisible by both 5 and 7! You should consider both 2 and 3 in such cases.

After the user is done entering values, your program should display all elements in the vector, in order, separated by spaces. On the next line, it also displays the minimum value and the maximum values in the vector. If there are no elements in the vector, then print “The vector is empty.”

**Sample run 1:**
```
Please enter a number:
2
Please enter a number:
4
Please enter a number:
6
Please enter a number:
8
Please enter a number:
10
Please enter a number:
12
Please enter a number:
14
Please enter a number:
16
Please enter a number:
-1
The elements in the vector are: 4 6 12 16
Min = 4
Max = 16
```

**Sample run 2:**
```
Please enter a number:
14
Please enter a number:
21
Please enter a number:
35
Please enter a number:
7
Please enter a number:
10
Please enter a number:
-1
The elements in the vector are: 10
Min = 10
Max = 10
```

**Sample run 3:**
```
Please enter a number:
-1
The vector is empty.
```

Your file should be named vectors.cpp. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste your solution.

## Extra credit(3 points): Character frequency <a name="extracredit"></a>

Write a function called **charCount()** that takes a `string` as an argument. 
Count the number of occurrences of each character in the string and print the characters and their counts in
alphabetical order (first uppercase and then lowercase) if they occur at least once in the string. Return the number of unique characters in the string (capital and lowercase are considered different).

*Function specifications*

* **Name:** charCount()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* inputText `string`: The text string containing alphabets between `A` to `Z` and `a` to `z`
* **Return Value:** `int`: The number of unique letters in the input string
* The function should print the number of occurrences for every letter that appears at least once in the input string beginning with capital alphabets.

**Hint**: Create an integer array (or multiple arrays) where each element represents the number of occurrences for every letter. Iterate over characters in the string, incrementing the appropriate count at each iteration.

**Sample run 1:**
Function call
```cpp
string textInput = "Colorado";
// numChars will store the values returned by charCount
int numChars = charCount(textInput);
cout << "Unique characters: " << numChars << endl;
```

Output
```
C: 1
a: 1
d: 1
l: 1
o: 3
r: 1
Unique characters: 6
```

Your file should be named charCount.cpp and should also include a main function that tests your charCount() function. Once you have finished developing and testing your solution in VSCode you should head over to the Homework 4 - Extra-credit CodeRunner on Canvas and paste only your **charCount() function** into the answer box.

# Submission Instructions <a name="submissions"></a>

### Checklist <a name="checklist"></a>

Here is a checklist for submitting the assignment:

1.  **CodeRunner**. The correctness of your program will be graded by Coderunner. You can modify your code and re-submit (press “Check” again) as many times as you need to, until the assignment due date. Use the solutions you created in VSCode to complete the assignment **Homework 4 - CodeRunner** on Canvas
    * Optionally, you may submit your answer to the extra credit question under the assignment **Homework 4 - CodeRunner (Extra Credit)**.
2. Submit one zip file to the Homework 4 assignment on Canvas. The zip file should be named hmwk4_lastname.zip. It should have the following 6 files (7 if attempting the extra-credit question):

        * arrayStats.cpp 
        * insertAfter.cpp
        * insertConsonants.cpp
        * splitString.cpp
        * floodMap.cpp
        * vectors.cpp
        * charCount.cpp (if you attempted the EC question)

### Grading Rubric <a name="rubric"></a>

| **Criteria**                                                | **Points** |
| ----------------------------------------------------------- | ------- |
| Question 1                                                  | 6       |
| Question 2a                                                  | 6       |
| Question 2b                                                 | 10      	|
| Question 3 						      | 10	|
| Question 4                                                  | 14      |
| Question 5                                                  | 14      |
| Total                                                       | 60      |
| Extra credit: character frequency                           | +3 pt   |
