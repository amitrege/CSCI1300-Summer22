#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    double var;

    // 1. create file stream objects/variables
    // ifstream means input file stream - used for reading from files
    ifstream fin; 


    // 2. Associate the file stream object with the file
    //    by using .open(), with the file name (as a string) in parentheses
    fin.open("sales1.txt");// Open input file
    

    // 3. Check if file opened successfully
    if (fin.fail())
    {
        cout << "File couldn't be opened!" << endl;
        return -1; 
        // return because I don't want my program to continue if 
        // file wasn't opened successfully

        // -1 to indicate the program didn't execute successfully
    }


    // 4. Read first line from file 
    // eof - end of file
    while(!fin.eof()) // while(fin >> var)
    {
        fin >> var;

        // if you come across \n 
        cout << "Cursor location: " << fin.tellg() << endl;
        // tellg() returns the location of the fil cursor
        
        cout << var << endl;
    }
    
    
    // 5. close files
    fin.close();
     
    return 0;
}