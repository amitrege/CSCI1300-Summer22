#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
   // 1. create file stream objects/variables
   // ftsream means input and output file stream - used for reading and writing to files
   // cout << "Start of program";
   fstream file1;
   
   // 2. Associate the file stream object with the file
   //    by using .open(), with the file name (as a string) in parentheses
   // string filename;
   // cout << "Enter filename: ";
   // getline(cin, filename);
   file1.open("poem.txt", ios::out | ios::in); // Open file in write and read mode
   if (file1.fail())
   {
        cout << "File couldn't be opened!" << endl;
        return -1;
   }

   file1 << "EXAMPLE" << endl;
   string line;

   // seekg() sets the position of the next character to be extracted
   file1.seekg(0,ios::beg); // .tellg

   // // 3. Read lines from file
   while (getline(file1, line))
   {
      // 4. process each line
      // check if there is any content in that line
      // line == ""; line = " "
      if(line.length()>0)
      {
         cout << line << endl;
      }
   }

   // 6. close file
   file1.close();
   return 0;
}