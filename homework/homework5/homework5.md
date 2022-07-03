#### **CSCI 1300 CS1: Starting Computing: Homework 5**
#### **Rege - Summer 2022**


<br/>

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
    2. [Question 2](#question2)
    3. [Question 3](#question3)
    4. [Question 4](#question4)
5. [Submission Instructions](#submissions)
    1. [Checklist](#checklist)
    2. [Grading rubric](#grading)

# Objectives <a name="objectives"></a>

* Understand how to read and process data from files

# Background <a name="background"></a>
## File Input
So far in class, we've been using the `iostream` standard library. This library has provided us with methods like cin and cout. cin is the method that reads from standard input (i.e. in the terminal via the keyboard) and cout is for writing to standard output.

In this background section we'll cover file input, which will allow you to read information from a file. To do this, we'll need to include C++'s `fstream` library, which is short for "file stream".

**Reading Lines From A File**

**Step 1. Make a stream object.** Create an object (a variable) of file stream type. If you want to open a file for reading only, then the `ifstream` object should be used (short for “input file stream”).

*Example*
```cpp
// create an input file stream object
ifstream fin;
```

**Step 2. Open a file.** Once you have a file stream object, you need to open the file. To do this, use the `open()` method (function), which for `ifstream` objects takes only one parameter: the file name as a string (surrounded by " " if the file name is given directly).

*Example*
```cpp
// open file1.txt with the file stream object
fin.open("file1.txt");  
```

**Step 3. Checking for open files.** It is always good practice to check if the file has been opened properly and take an appropriate action if not. To check if a file was successfully opened, use the `is_open()` method. This will return a Boolean value true if the file has successfully opened and false otherwise.

*Example*
```cpp
if (fin.is_open())
{
    // do things with the file
}
else
{
    cout << "Could not open file." << endl;        
}
```

**Step 4. Read lines from the file.** To read a line from the file, you can use `getline(fin, line)` which returns true as long as an additional line has been successfully assigned to the variable line. Once no more lines can be read in, getline returns false. So we can set up a while loop where the condition is the call to getline.

*Example*
```cpp
string line = "";
int lineidx = 0;
// read each line from the file
while (!fin.eof())
{
    getline(fin, line);
    // print each line read from the file
    cout << lineidx << ": " << line << endl;
    // increment index(count of lines in the file)
    lineidx++;   
}
```

**Step 5. Closing a file.** When you are finished processing your files, it is recommended to close all the opened files before the program is terminated. You can do this by using the `fin.close();` line.

*Example*
```cpp
// closing the file
fin.close();
```

**Step 6. Putting it all together.** If we put all the previous steps together, this is the final piece of code we get.

*Example*
```cpp
// create an input file stream object
ifstream fin;
// open file1.txt with the file stream object
fin.open(“file1.txt”);  
if (fin.is_open())
{
    // do things with the file
    string line = "";
    int lineidx = 0;
    // read each line from the file
    while (!fin.eof())
    {
        getline(fin, line);
        // print each line read from the file
        cout << lineidx << ": " << line << endl;
        // increment index (count of lines in the file)
        lineidx++;   
    }
}
else
{
    cout << "Could not open file." << endl;
}
// closing the file
fin.close();
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

### For this homework, you are not allowed to use:
* stringstream objects
* pointers
* references
* vectors
* global variables

## Question 1: Netflix Streaming <a name="question1"></a>

Today is your first day as a software engineering intern at Netflix. For your first assignment, your boss asked you to develop a function to print statistics about the most streamed TV shows. You've been given **show_list.txt**, a file which contains a list of some of the most popular shows. Each line contains the name of the show and number of streams separated by a single "-" delimeter.

Your function should meet the following specifications:
* The function name: **tvStreamStats**
* The function parameters in this order:
    * `string` **filename**: the name of the file to be read
* The function doesn't return values but it should:
    * Print the number of lines it read
    * Print the name and number of streams of the most streamed show
    * Print the name and number of streams of the least streamed show
    * If any ties for most or least streamed are found, keep the most recent show
    * Print an error message and exit the program if the file couldn't be opened
* The function should **only** keep count of nonempty lines

Example file ([show_list.txt](data_files/show_list.txt))
```
The Office-887000
Seinfeld-675000
Bridgerton-721500
Great British Baking Show-822400
```

**Sample run 1**

Function call:
```cpp
string filename = "show_list.txt";
tvStreamStats(filename);
```
Output:
```
Number of lines read: 3.
Most streamed show: The Office with 887000 streams.
Least streamed show: Seinfeld with 675000 streams.
```

**Sample run 2**

Function call:
```cpp
string filename = "does-not-exist.txt";
tvStreamStats(filename);
```
Output:
```
Could not open file.
```
Your file should be named tvStreamStats.cpp and should also include a main function that tests your tvStreamStats() function. Once you have finished developing and testing your solution in VSCode, you should head over to the CodeRunner on Canvas and paste only your **tvStreamStats() function** into the answer box for question 1.


## Question 2: Read orders <a name="question2"></a>

For this problem, we'll reuse the **split** function, preloaded for you in Coderunner. In the specifications, we mentioned that **split** should return an integer based on one of the following conditions:

* Returns the number of splits found
* Returns 1 if the delimiter was not found in the string
* Returns -1 if the number of splits is larger than the size of the array
* Returns 0 if string provided is empty

For this question, you'll be using the **bakery_orders.txt** file. Each line in this file has information about a customer's order, including their name, cake preference and order number. However, there are some empty lines and others that may have missing or more order information than the three attributes we care about. You can assume that no line will have delimiters at the beginning or end of the string and that there are no delimiters added consecutively. Your **split** function should not need to be modified.

Sample file ([bakery_orders.txt](data_files/bakery_orders.txt)):
```
Anna-Berry Napoleon-200

Greg-Tiramisu-202
Fred-Sponge Cake-203
Almond Cake-204
Leah-Strawberry Cake-205
```

Create a function called **readOrders** which will take the filename as an input parameter, proceed to open the file and read lines from it. **readOrders** should then pass each line into **split** for parsing. Based on the return value from **split**, the number of orders found should **only** be incremented if three attributes: name, cake preference and order number were found. Other lines that don't match this criteria should be ignored. More details on the function specifications are listed below.

* readOrders function specifications:
    * The function name: **readOrders**
    * The function parameters in this order:
        * `string` **filename**: the name of the file to be read
    * The function returns an integer depending on the following conditions:
        * It returns the number of orders in the file who had three attributes listed
        * It returns -1 if the file couldn't be opened and prints `"Could not open file."`
    * The function should ignore empty lines

**Sample run 1**

Function call:
```cpp
string filename = "bakery_orders.txt";
int numOrders = readOrders(filename);
if (numOrders != -1)
{
    cout << "Number of orders: " << numOrders << "." << endl;
}
```
Output:
```
Number of orders: 2.
```

**Sample run 2**

Function call:
```cpp
string filename = "does-not-exist.txt";
int numOrders = readOrders(filename);
if (numOrders != -1)
{
    cout << "Number of orders: " << numOrders << "." << endl;
}
```
Output:
```
Could not open file.
```

Your file should be named readOrders.cpp and should also include a main function that tests your readOrders() function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **split()** and **readOrders()** functions into the answer box for question 2.

## Question 3: Video Game Statistics <a name="question3"></a>
In an effort to get rich quick with your newly acquired C++ skills, you begin to design an open world game for the app store. You offer the users various options when it comes to designing a character. Each character can be summarized by four attributes: their default name, maximum stamina, maximum health and special skill value. The **game_samples.txt** file stores the character attributes in each line separated by `"-"` delimiters. Much like in Question 2, not every line has the right amount information we want so design **readData** to account for this. **readData** should take the filename as an input, read the file, parse each line (hint: use your **split** function. It should once again require no modifications) and store the information in a 2D array.

Sample file ([game_samples.txt](data_files/game_samples.txt)):
```
characterA-95-79-75
characterB-88-94-70
characterC-80-92
characterD-85-90-73
```

* **readData** function specifications:
    * The function name: **readData**
    * The function parameters for this character:
        * `string` **filename**: the name of the file to be read
        * `string` **characters[]**: an array of strings to store the character names
        * `int` **attributes[][3]**: a 2D array of integers to store the max stamina, max health and special skill value for each character. This should have the same number of rows as your characters array. You should assume there are only 3 columns
        * `int` **arrSize**: the number of elements that can be stored in characters and attributes arrays
        * `int` **splits**: the max number of splits. This will be used to verify we only store the four attributes we care about
    * The function returns an integer depending on the following conditions:
        * It returns the number of characters stored in the string array of character names if the function can open and read the file
        * It returns -1 if the file couldn't be opened and prints `"Could not open file."`

**Note:** If the file contains more data than what can be stored in these arrays, characters and attributes should be filled up with as many elements that can be stored in them. The number of characters that were processed and stored in the arrays should be returned.

**Sample run 1**
```cpp
string filename = "game_samples.txt";
// max number of splits
int splits = 4;
// number of Characters
int numCharacters = 3;
// call read data function
string characters[numCharacters];
int attributes[numCharacters][3];
int numLines = readData(filename, characters, attributes, numCharacters, splits);
if (numLines != -1)
{
    cout << "Number of lines: " << numLines << "." << endl;
    // printNames will be provided for the Coderunner tests
    printNames(characters, numLines);
    // printAttributes will also be provided for the Coderunner tests
    printAttributes(attributes, numLines);
}
```
Output:
```
Number of lines: 3.
names[0] = characterA
names[1] = characterB
names[2] = characterD
stamina: 95, health: 79, special skill: 75
stamina: 88, health: 94, special skill: 70
stamina: 85, health: 90, special skill: 73
```

**Sample run 2**
```cpp
string filename = "does-not-exist.txt";
// max number of splits
int splits = 4;
// number of characters
int numCharacters = 3;
// call read data function
string characters[numCharacters];
int attributes[numCharacters][3];
int numLines = readData(filename, characters, attributes, numCharacters, splits);
if (numLines != -1)
{
    cout << "Number of lines: " << numLines << "." << endl;
    // printNames will be provided for the Coderunner tests
    printNames(characters, numLines);
    // printAttributes will also be provided for the Coderunner tests
    printAttributes(attributes, numLines);
}
```
Output:
```
Could not open file.
```



Your file should be named videoGameStats.cpp and should also include a main function that tests your readData() function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **split()** and **readData()** functions into the answer box for question 3.

## Question 4: Computing Score <a name="question4"></a>

Once you've successfully implemented and tested **readData**, write a function **calcOverallScore**. To calculate an overall score for each character, take the average of the max health, max stamina, and special skill value using the 2D array populated by **readData**. For example, the overall score for characterA from the **game_samples.txt** file would be:

```
character A overall score: 83.
```

The specifications for calcOverallScore are listed below.
* **calcOverallScore** function specifications:
    * The function name: **calcOverallScore**
    * The function parameters for this character:
        * `string` **characters[]**: the array of strings containing the names of the characters
        * `int` **attributes[][3]**: the 2D array of integers containing the character attributes. You should assume there are only 3 columns
        * `int` **numCharacters**: the number of characters in the file
        * `int` **numAtts**: number of attributes
    * The function has no return variables, rather it prints the overall score for each of the characters to 1 decimal place (use `setprecision`) found in the game_samples.txt file.

**Sample run 1**

Function call:
```cpp
string filename = "game_sample.txt";
// max number of splits
int maxSplits = 4;
// number of orders
int numCharacters = 3;
// number of attributes
int numAtts = 3;
// call read data function
string characters[numCharacters];
int attributes[numCharacters][3];
int numLines = readData(filename, characters, attributes, numCharacters, maxSplits);
if (numLines != -1)
{
    calcOverallScore(characters, attributes, numLines, numAtts);
}
```
Output:
```
characterA overall score: 83.0.
characterB overall score: 84.0.
characterD overall score: 82.7.
```
Your file should be named computeScore.cpp and should also include a main function that tests your calcOverallScore() function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **split()**, **readData()**  and **calcOverallScore()** functions into the answer box for question 4.


# Submission Instructions <a name="submissions"></a>

### Checklist <a name="checklist"></a>

Here is a checklist for submitting the assignment:

1.  **CodeRunner**. The correctness of your program will be graded by Coderunner. You can modify your code and re-submit (press “Check” again) as many times as you need to, until the assignment due date. Use the solutions you created in VSCode to complete the assignment **Homework 5 - CodeRunner** on Canvas. 

2.  **C++ files**. When you are finished with all the questions, zip all of your .cpp files together. Submit the single zip file under the assignment **"Homework 5 - zip"** on Canvas.

    * The zip file should have the following 4 files:    
        * tvStreamStats.cpp
        * readOrders.cpp
        * videoGameStats.cpp
        * computeScore.cpp


