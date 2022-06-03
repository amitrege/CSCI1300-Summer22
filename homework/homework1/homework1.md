#### **CSCI 1300 CS1: Starting Computing: Homework 1**
#### **Rege - Summer 2022**
#### **Due: Monday, June 6 by 11:59pm MST**

<br/>

# Table of contents
1. [Objectives](#objectives)
2. [Background](#background)
3. [Submission Instructions](#submissions)
4. [Questions](#questions)
    1. [Question 1](#question1)
    2. [Question 2](#question2)
    2. [Question 3](#question3)
    2. [Question 4](#question4)
    2. [Question 5](#question5)
    2. [Question 6](#question6)
5. [Overview](#overview)
    1. [Checklist](#checklist)
    2. [Grading Rubric](#grading)

# Objectives <a name="objectives"></a>

* Compile and run C++ code
* Take user inputs and produce outputs
* Understand C++ data types
* Perform arithmetic operations


# Background <a name="background"></a>
## Input & Output
The ability to display information to the user and receive input from them is key to making your programs useful. In C++ one way we can achieve this exchange of information is using **cout** (console out) and **cin** (console in) from the iostream library. Whenever you use **cout** or **cin**, you will need to be sure to include the **iostream** (input output stream) library and use the **std** (standard) namespace.

Example Input (User input in **bold**)
```cpp
#include <iostream>
using namespace std;

int main(){
   int number1;
   int number2;
   cout << "Please enter the first number:" << endl;
   cin >> number1;
   cout << "Please enter the second number:" << endl;
   cin >> number2;
   cout << "Sum of numbers: " << number1 + number2 << endl;
}
```
<pre>
Please enter the first number:
<b>1</b>
Please enter the second number:
<b>2</b>
Sum of numbers: 3
</pre>

## Data Types

When programming, we store the variables in our computer's memory, but the computer needs to know what kind of data we want to store in them, since it is not going to occupy the same amount of memory to store a simple number than to store a single letter or a large number, and they are not going to be interpreted the same way. Some commonly used data types in C++ are:

1. int (for integers)
    * int myInt = 5;  
2. char (for characters)
    * char myChar = 'c';
3. float (for floating-point numbers)
    * float myFloat = 4.4531;
4. double (for double precision floating-point numbers)
    * double myDouble = 4.4531;
5. string (for strings of characters)
    * string myString = “Hello World”;

## Coding Style

### Whitespace and indentation

**Whitespaces:** Whitespace can set things off and reduce the strain on the reader's eyes. Because the compiler ignores whitespace, you're free to place things anywhere you want and format it however you want. Whitespace can come in several forms, including indentation.

**Indenting:** Increase your indentation by one increment of each brace {, and decrease it once on each closing brace }. Place a line break after every {. Use Tab to increase indent and Shit+Tab to decrease indentation.

**Bad Example:** There is no indentation and it is difficult to see where different portions of the code start and stop.
```cpp
int main(){
int number = 0;
while(number < 10){
if(number < 5){
cout << "Less than 5" << endl;
}else{
cout << "Greater than 5" << endl;
}
number++;
}
}
```
Good Example: There is proper indentation and the code is easier to read.
```cpp
int main() {
    int number = 0;
    while(number < 10) {
        if(number < 5) {
            cout << "Less than 5" << endl;
        }
        else {
            cout << "Greater than 5" << endl;
        }
        number++;
    }
}
```

### Naming and variables
**Names:** Give variables descriptive names, such as firstName or homeworkScore. Avoid one-letter names like a or x, except for loop counter variables such as i.

Bad Example:
```cpp
int thing = 16;
double a = 2.2;
string x = "Michael";
}
```

Good Example:
```cpp
int cupsPerGallon = 16;
double lbsPerKilo = 2.2;
string firstName = "Michael";
}
```
**Capitalization:** Name variables and functions with “lower camel-casing”, where the first letter is lowercase and all subsequent words in the name start with a capital letter.

Bad Example:
```cpp
int numberbananas = 10;
double NumberFish = 7;
string AGEOFPERSON = "Michael";
}
```
Good Example:
```cpp
int numberBananas = 10;
double numberFish = 7;
string ageOfPerson = "Michael";
}
```


### Comments
* Commenting your code is highly recommended. Comments are useful in explaining what you are doing, especially if you have a complex section of code. These comments are intended to help other developers understand how your code works. These comments should begin with two backslashes (//) or the multi-line comments (/* … comments here… */) .

* Examples:
    *  Single-line:
    ```cpp
    // CSCI 1300 Summer 2022</br>
    ```
    * Multi-line:
    ```cpp
    /*
    Algorithm:
    Input: two numbers
    Output: sum of input numbers

    1. Ask the user to enter a number
    Save in variable number_1
    2. Ask the user to enter a number
    Save in variable number_2
    3. Compute sum
    sum = number_1 + number_2
    4. Display sum to user
    */
   ```


# Submission Instructions <a name="submissions"></a>

* **C++ files**. All files should be named as specified in each question, and they should compile and run on VSCode to earn full points. TAs will be grading the style of your code and comments. Please see the coding style under the [background](#background) section. At the top of each file, write your name with the following format:</br>
```cpp
// CSCI 1300 Summer 2022</br>
// Author: Punith Sandhu</br>
// Recitation: 123 – TA name</br>
// Homework 1 - Problem # …
```
Example submission:
```cpp
// example_1.cpp

// CSCI 1300 Summer 2022
// Author: Punith Sandhu
// Recitation: 123 – TA name
// Homework 1 - Problem # ...

#include <iostream>

using namespace std;

int main() {

    int num = 10;
    cout << num << endl;

    return 0;
}
```
When you are finished with all the questions, zip all files. Submit the zip file under the assignment Homework 1 on Canvas.

# Questions <a name="questions"></a>
## **Question 1 (6 points): Hello You!** <a name="question1"></a>
If a program is more interactive, it’s fun! Create a program that takes a name and prints _“Hello, \<name>!”_. Your output should be exactly the same as below, including the prompt for the user input.

Expected output (**bold** is user input)
<pre>
Enter your name:
<b>Tuhina</b>
Hello, <b>Tuhina</b>!
</pre>

The file should be named as _helloYou.cpp_. Don’t forget to head over to the Homework 1 - Coderunner assignment on Canvas and paste your solution in the answer box!

## **Question 2 (4 points): Almond Milk (pseudocode)** <a name="question2"></a>
While shopping over the weekend for almond milk, you discover that all the almond milk cartons have square bases and varying heights. Write an algorithm which takes user inputs for the side length of the square base of the carton in inches and the height of the carton in inches and outputs how many ounces a carton holds. You can use the following formula to convert cubic inches to ounces:

```
ounces = 0.55 * cubic inches
```

Hint: you should calculate cubic inches from the cartons dimensions before calculating ounces.

**--- Sample run ---:** <br/>
```
What is the side length of the base of the carton in inches?
2
What is the height of the carton in inches?
4
The carton has a volume of 8.8 ounces.
```
Don’t forget to head over to the Homework 1 - Coderunner assignment on Canvas and paste your solution in the answer box!

## **Question 3 (8 points): Almond Milk** <a name="question3"></a>
We've already written psuedocode for the Almond Milk problem in Problem 2. We need to convert it to C++ code to solve this question._

While shopping over the weekend for almond milk, you discover that all the almond milk cartons have square bases and varying heights. Write a program which takes user inputs for the side length of the square base of the carton in inches and the height of the carton in inches and outputs how many ounces a carton holds. You can use the following formula to convert cubic inches to ounces:

```
ounces = 0.55 * cubic inches
```

Hint: you should calculate cubic inches from the cartons dimensions before calculating ounces.

The output should be the volume of the carton in ounces formatted with a two-digit precision as shown below. You can use the setprecision() function with the fixed manipulator from the <iomanip> library to do so.

**--- Sample run ---:** <br/>
```
What is the side length of the base of the carton in inches?
2
What is the height of the carton in inches?
4
The carton has a volume of 8.80 ounces.
```
The file should be named as _almondMilk.cpp_. Don’t forget to head over to the Homework 1 - Coderunner assignment on Canvas and paste your solution in the answer box!

## **Question 4 (16 points): Snowfall** <a name="question4"></a>

You’re planning a ski trip for later this semester! You want to know how much snow each Colorado resort will have by that time.

Write a program to estimate the number of inches of snow Breckenridge, Vail, and Copper Mountain will have after a certain number of days (`X`) and display the output. `X` will be taken as a user input. Currently, there are 28 inches in Breckenridge, 33 inches at Vail, and 55 at Copper Mountain.

The resorts have provided us with the snowfall and melt rate predictions per day (mentioned below) to come up with an accurate estimation. Assume these rates stay the same for all future days. **The rates do not depend on the current number of inches at each resort.**

**Hint: The calculated snow depth cannot be negative.**

| **Resort**      | **Snowfall rate (inches/day)** | **Melt rate (inches/day)** |
| --------------- | ------------------------------ | -------------------------- |
| Breckenridge    | 15                             | 4                          |
| Vail            | 11                             | 7                          |
| Copper Mountain | 3                              | 2                          |

**--- Sample run ---:** <br/>
```
How many days in the future would you like a prediction for?
10
Breckenridge will have 138 inches, Vail will have 73 inches, and Copper Mountain will have 65 inches.
```
The file should be named as _snowfall.cpp_. Don’t forget to head over to the Homework 1 - Coderunner assignment on Canvas and paste your solution in the answer box!

## **Question 5 (16 points): Convert wizarding currency** <a name="question5"></a>

In the wizarding world, currency conversion is as given below:
| | |
|-|-|
| 1 Sickle | 29 Knuts |
| 1 Galleon | 17 Sickles |

Write a program that takes a number of Knuts as user input (as an integer) and converts it to the number of whole Galleons, Sickles, and Knuts as shown below. The conversion information between these measurement metrics is provided in the table above. You should convert the number of Knuts in such a way that maximizes the whole number of Galleons and Sickles.


Expected output 1 (**bold** is user input)
<pre>
Enter the number of Knuts:
<b>32</b>
0 Galleons(s) 1 Sickle(s) 3 Knut(s)
</pre>

Expected output 2 (**bold** is user input)
<pre>
Enter the number of Knuts:
<b>3000</b>
6 Galleon(s) 1 Sickle(s) 13 Knut(s)
</pre>



The file should be named as _convertCurrency.cpp_. Don’t forget to head over to Coderunner on Canvas and paste your solution in the answer box!


## **Question 6 (10 points): Calculating the sigmoid** <a name="question6"></a>

Write a program that takes a real number x as the input (x is of type double) and computes its sigmoid value. The sigmoid function takes an input x of any real number and returns an output value in the range of -1 and 1 . The sigmoid can be computed using mentioned below.


<!-- ![Formula](images/formula.png) -->
<img src="images/formula.png" width="190" height="80" />

For e<sup>z</sup> use the function exp(), which is available in #include \<cmath>.

Expected output 1 (**bold** is user input)
<pre>
Enter a value for x:
<b>1</b>
The sigmoid for x=1 is 0.731059
</pre>

Expected output 2 (**bold** is user input)
<pre>
Enter a value for x:
<b>10</b>
The sigmoid for x=10 is 0.999955
</pre>

The file should be named as calcSigmoid.cpp. Don’t forget to head over to Coderunner on Canvas and paste your solution in the answer box!


# Homework 1 overview  <a name="overview"></a>
## Checklist <a name="checklist"></a>
Here is a checklist for submitting the assignment:
1. Use your solutions in VS Code to complete the **Homework 1 - Coderunner** assignment on Canvas.
2. Submit one zip file to the **Homework 1** assignment on Canvas. The zip file should be named, **hmwk1_lastname.zip**. It should have the following 5 files:
    * helloYou.cpp
    * almondMilk.cpp
    * snowfall.cpp
    * convertCurrency.cpp
    * calcSigmoid.cpp


## Grading Rubric <a name="grading"></a>

| **Criteria**                                | Points |
| ------------------------------------------- | ------ |
| Question 1                  | 6     |
| Question 2                  | 4     |
| Question 3                  | 8     |
| Question 4                  | 16     |
| Question 5                  | 16    |
| Question 6                  | 10     |
| Recitation attendance (Week 1)*             | -6    |
| Total                                       | 60     |

* If your attendance is not recorded, you will lose points. Make sure your attendance is recorded on Canvas.
