#include <iostream>

using namespace std;

void print_triangle(int side_length)
{
   if (side_length < 1) 
   { 
      return; 
   }

   for (int i = 0; i < side_length; i++)
   {
      cout << "[]";
   }
   cout << endl;
   
   print_triangle(side_length - 1);
}


int main()
{
    /*
    The first call prints one line and then calls print_triangle(length - 1)
    Second call prints one line and goes one call deeper (length - 2)
    and so on....
    */
   print_triangle(4);
}