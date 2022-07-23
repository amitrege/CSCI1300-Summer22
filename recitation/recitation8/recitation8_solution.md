# Question 1: Spot Error
## a.
```cpp
class Rectangle
{
    private:
    int height;
    int width;

    public:
    rectangle(int h=0, int w)
    {
        height = h;
        width = w;
    }

    int getArea()
    {
        return height * width;
    }
};
```

**Solution:**
```cpp
class Rectangle
{
    private:
    int height;
    int width;

    public:
    Rectangle(int h, int w=0)
    {
        height = h;
        width = w;
    }

    int getArea()
    {
        return height * width;
    }
};
```

## b.
```cpp
#include <iostream>
#include <string>
using namespace std;

// This object can add two integers
class Adder
{
    private:
    int add(int first, int second)
    {
        return first + second;
    } 
}

int main()
{
    // ask user for 2 integers
    int first, second;
    cout << "Enter integers to add:" << endl;
    cin >> first >> second;

    // create the adder object
    Adder Adder;

    // add the integers
    cout << "The sum is " << adder.add(first, second) << endl;
    return 0;
}

```
**Solution:**
```cpp
#include <iostream>
#include <string>
using namespace std;

// This object can add two integers
class Adder
{
    public:
    int add(int first, int second)
    {
        return first + second;
    } 
};

int main()
{
    // ask user for 2 integers
    int first, second;
    cout << "Enter integers to add:" << endl;
    cin >> first >> second;

    // create the adder object
    Adder adder;

    // add the integers
    cout << "The sum is " << adder.add(first, second) << endl;
    return 0;
}

```

## c.
```cpp
class Square {
    private:
    int side;

    public:
    void Square(double x) {
        side = x;
    }

    int area() {
        return x * x;
    }
};

```
**Solution:**
```cpp
class Square {
    private:
    int side;

    public:
    Square(int x) {
        side = x;
    }

    int area() {
        return side * side;
    }
};
```

## d.
```cpp
int func(int num){
    if(num == 0){
        cout<<"Hello World!"<<endl;
    }
    return 5 + func(num - 1);
}
```
**Solution:**
```cpp
int func(int num){
    if(num <= 0){
        cout<<"Hello World!"<<endl;
        return 0;
    }
    return 5 + func(num - 1);
}
```

### d_1. 
What's the time complexity of question 1d? 

**Answer:**
O(n)

# Question 2:
## a. 
In C++, which one of the following statements about constructors is necessarily true?

**Answer:**
Constructors have the same name as the class.

## b.
A constructor that accepts ______ parameter(s) is called the default constructor.

**Answer:**
0

## c. 
Which of the following constructors is called for the object declaration AeroPlane aero1(10, 100)?
```cpp
class AeroPlane{
  public:
    void set_new_height(double h);
    void view() const; 
    AeroPlane();
    AeroPlane(double h);
    AeroPlane(double h, double s);
  private:
    double height;
    double speed;
}
```
**Answer:**

Aeroplane(double h, double s)

# Question 3:
What is the output from the code snippet below when the input file test.txt contains the single line "Beth  (402)  719-2428"?
```cpp
ifstream in_file;
string myword;
in_file.open("test.txt");
while(in_file >> myword){
  cout << myword <<endl;
}

```
**Answer:**

Beth  
(402)  
719-2428

# Question 4:
What is the output of the following program?
```cpp
 #include <iostream>
 #include <vector>
 using namespace std;
 
 int main(){
    vector<int>vec = {5, 4, 3, 2, 1};
    vec.push_back(8);
    vec.push_back(9);
    vec.pop_back();
    cout<<"The last element of the vector is " << vec[vec.size()-1] <<endl; 
    return 0; 
 }
 ```
 **Answer:**
 
 The last element of the vector is 8
