#include <iostream>

using namespace std;

void print_triangle(int side_length)
{
   if (side_length < 1) 
   { 
      return; 
   } 

   print_triangle(side_length - 1);

   for (int i = 0; i < side_length; i++)
   {
      cout << "[]";
   }
   cout << endl;
}


int main()
{
    /*
    Here we make a function call before the print statement

    Therefore, the first time we print out a line, we will have reached
    the bottom of the recursion
    Only after that will we reach the print statement. 
    */
    print_triangle(4);
}