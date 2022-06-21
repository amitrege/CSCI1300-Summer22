#### **CSCI 1300 CS1: Starting Computing**
#### **Summer 2022**
#### **Recitation 2 - Solutions**

## 1. Spot the errors of the following cpp program
a. 
```cpp
//Ask the user to enter two numbers and then print the sum
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
<pre><code>#include <b><iostream></b>
<b>using namespace std;</b>
int main(<b>)</b>
{
  <b>int x;</b>
  <b>int y;</b>
  cout << "Please enter two numbers:"<b>;</b>
  cin >> x <b>>></b> y;
  cout << "The sum of <b>”</b> << x << " and " << y
     << " is: " << x + y << endl;
  return <b>0</b>;
}
</code></pre>
-----------------------------

b.
```cpp  
//compute and print the average of two numbers  
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

*Errors:*
-----------------------------
<pre><code>#include <iostream>
 using namespace std;

 int main()
{
  <b>double total = 0;</b>
  int x1;
  cout << "Please enter a number: " << endl;
  cin >> x1;
  total = total + x1;      
  cout << "total: " << total << endl;

  cout << "Please enter another number: " << endl;
  int x2;
  cin >> x2;

  total = total + <b>x2</b>;
  cout << "total: " << total << endl;
  total = total / 2;
  cout << "The average of the two numbers is " << total << <b>endl</b>;
  return 0;
}
</code></pre>
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
*Errors:*
-----------------------------
<pre><code>
#include <b>&lt;iostream&gt;</b>
using namespace std;

//Set the variable value to 1 when x or y is 1
int main()
{				
    int x = 1,y=0,value;
    
    if (x == 1)
    { 
        if(y==0)<b>
        {</b>
          value = 1; <b>
        }</b>
        else<b>
        {
          y = 0; 
        }
    } </b>
    if(x==0)
    { 
        if(y==0)<b>
         {</b>
            value = 0; <b>
         }</b>
        else<b>
        {</b>
            value = 1;<b>
        }</b>
    }
    
    cout <b> &lt;&lt;</b> value <b> &lt;&lt;</b>endl;
    return 0;
}

</code></pre>
-----------------------------

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

*Errors:*
-----------------------------
<pre><code>
#include <iostream>
using namespace std;

int main()
{
    int angle = 40;
    if (<b>angle</b> < 90) { 
        cout<<"It is an acute angle." ;
    }<b>
    else</b> if(<b>angle == </b>90) {
        cout<<"It is a right angle.";
    }
    else{
        cout<<"It is an obtuse angle.";
    }
}
</code></pre>
-----------------------------

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

*Errors:*
-----------------------------
<pre><code>
// This checks if a number between 0 and 5 is odd or not
<b>#include &lt;iostream&gt;</b>
using namespace std;

int main()
{
    char digit = '5';
    switch (digit) {
    case<b> '0':
	    cout << "It's neither even nor odd!" << endl;
	    break;</b>
    case<b> '1':
	    cout << "It's odd!"  << endl;
	    break;</b>
    case <b>'2':
	    cout << "It's even!" << endl;
	    break;</b>
    case <b>'3':
	    cout << "It's odd!"  << endl;
	    break;</b>
    case'4':<b>
	    cout << "It's even!" << endl;
      break;</b>
    case <b>'5':
	    cout <<  <b>It's odd! </b>  << endl;
	    break;</b>
    }

return 0;
}
</code></pre>
-----------------------------

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

*Errors:*
-----------------------------
<pre><code>
#include &lt;iostream&gt;
<b>#include &lt;cmath&gt;</b>
using namespace std;

int main()
{
    <b>int x=1</b>,y = 0;

    if (<b> x &gt; 0</b>  && y > 0)
    {
	if (x > pow(y, sqrt(4))<b>)</b> { 
	    y = y + x; 
	}
	else (x <= pow(y, sqrt(4))) {
	    y = x - y; 
	}
	else {
	    y = 0;
	}
    }
    
    cout << y << endl<b>;</b>
} 
</code></pre>
-----------------------------

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
  
  ``` 
      Pseudocode:
      Declare waterDrunk variable
      Declare waterGoal variable to be 64
      Print out statement to prompt user
      Get input from user and store in waterDrank
      If waterDrank <= 32 
        print ”You’re very, very dehydrated! Get that water in!
        print “You have” + waterGoal- waterDrunk + “have X fl oz left to drink.”
      else if waterDrank > 32  && waterDrank < 64 
        print  “ You’re doing great, but you’re still halfway to your goal! Get that water in!   You have 27 fl oz left to drink. “
        print “You have” + waterGoal- waterDrunk + “have X fl oz left to drink.”

      else if  waterDrank >=64 
        print “ You’ve hit your goal for the day! Great job getting hydrated!“
  ```

-----------------------------
  **2b**. Let’s draw a flowchart of the solution

  ![image](https://user-images.githubusercontent.com/85261163/151718334-75c35662-d697-45cd-a23d-9fd88662ffbb.png)

**2c**. Imagine how a sample run of your program would look like. Think about at least two examples

*Sample run 1:*
```
    How much water did you drink today?(in fl oz)
    37
    You’re doing great, but you’re still halfway to your goal! Get that water in! You have 27 fl oz left to drink.

```
*Sample run 2:*

```
    How much water did you drink today?(in fl oz)
    64
    You’re very, very dehydrated! Get that water in! You have 33 fl oz left to drink.

```
*Sample run 3:*
```
    How much water did you drink today?(in fl oz)
    31
    You’ve hit your goal for the day! Great job getting hydrated!

```

  **2d**. Identify the values that you must test for. We call these values “boundary conditions”.
  ``` 
     Values less than 32, 32, values between 32 and 64, 64, values above 64
  ```

  **2e**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.
  ```cpp
          #include <iostream>
          using namespace std;

          int main(){
              int waterDrunk;
              int waterGoal;
              waterGoal = 64;
                  cout << "How much water did you drink today?(in fl oz)" << endl;

                  cin >> waterDrunk;

                if(waterDrunk<=32) {
                      cout << "You’re very, very dehydrated! Get that water in!" <<"You have " << waterGoal-waterDrunk<<" fl oz"
                      <<" left to drink." <<endl;

                  }
                else if (waterDrunk>32 && waterDrunk<=64) {
                      cout << "You’re doing great, but you’re still halfway to your goal! Get that water in!" <<endl <<"You have " << waterGoal-waterDrunk<<" fl oz"
                      <<" left to drink." <<endl;

                  }
              else {
                      cout << "You’ve hit your goal for the day! Great job getting hydrated!";

                  }      
              return 0;
          }
   ```       
