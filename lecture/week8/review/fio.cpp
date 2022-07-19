#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
 
    string s1;
    string s2;


/*
    cin >> s1;
    cin >> s2;
    cout << "We got the strings : " << s1 << " and " << s2 << endl;









    // getline ->> stops at the next new line ('\n')
    getline(cin, s1);
    getline(cin, s2);
    cout << "We got the strings : " << s1 << " and " << s2 << endl;








    // DO NOT MIX UP cin and getline()
    // I've typed -> amit\nrege
    cin >> s1;
    cin.ignore();
    getline(cin, s2);
    cout << "We got the strings : " << s1 << " and " << s2 << endl;

    // This exact same thing applies when working with files
    // Do not mix fin >> with getline()
   








    // Streams -> water going through a pipe
   // File Streams are used to take input or write to files
   // ifstream -> input file stream
   // ofstream -> output file stream
   // fstream -> can do both
   // Usually, we use ifstream or ofstream to make our intentions explicit

    ifstream ifs("1.txt"); 

    // This needs to be done for validation
    // I will be skipping this henceforth for brevity
    if(!ifs.is_open()) {
        cout << "File not found" << endl;
        return -1;
    }
    
    string line;
    while(getline(ifs, line)) {
        cout << line << endl;
    }

    ifs.close();






    ifstream ifs("1.txt"); 
    
    string line;
    while(ifs >> line) {
        cout << line << endl;
    }

    ifs.close();






    // csv -> comma separated vales
    ifstream ifs("example.csv");
    string line;
    int num;

    // Option 1:
    // Use the split() function you've been using

    // Option 2:
    // Split using string functions if you know how many times you need to split
    while(getline(ifs, line)) {
        if (line.length() > 0) { // Check for empty lines; skipped after this
            int idx = line.find(',');
            string city = line.substr(0, idx);

            string n = line.substr(idx+1);

            cout << city << endl;
            cout << n << endl;

            num = stoi(n);
        }
    }







    // Another option:
    // Use the third arg of getline()
    ifstream ifs("example1.csv");
    
    string s;
    int num;
    int i = 0;
    while(getline(ifs, s, ',')){

        cout << s << endl;
        i += stoi(s); // string to int 
        // need to convert to int to use th number meaningfully
   }
    cout << i << endl;
   ifs.close();



*/







    // Space separated lines are even easier to handle if you know types
    ifstream ifs("3.txt");
    
    string s;
    int num;
    string uni;
    string line;


    while(ifs >> s >> num >> uni) {
        cout << s << endl;
        cout << num << endl;
        cout << uni << endl;
    }


    while(!ifs.eof()) {
        
        ifs >> s >> num >> uni;
        cout << s << endl;
        cout << num << endl;
        cout << uni << endl;
    }



    // String stream 
    // Can be useful for formatting
    string s = "Todays date is 06-24";
    stringstream ss(s); // equivalent to saying ss = s

    string word;
    
    while(ss >> word) {
        cout << word << endl;
    }



    while(getline(ifs, line)) {
        stringstream ss(line);
        ss >> s >> num >> uni;
        cout << s << endl;
        cout << num << endl;
        cout << uni << endl;
    }
*/















/*
    // String stream 
    // Can be useful for formatting
    string s = "Todays date is 06-24";
    stringstream ss(s); // equivalent to saying ss = s

    string word;
    
    while(ss >> word) {
        cout << word << endl;
    }

    

    





    // csv -> comma separated vales
    ifstream ifs("example.csv");
    
    string line;
    int num;
    while(getline(ifs, line)){
        stringstream ss(line);

        string cell;
        while(getline(ss, cell, ',')) {
            cout << cell << endl;
        }
       
   }

   ifs.close();
















    ofstream ofs("2.txt");

    string s = "hello";

    // similar to cout << (this ouptuts to screen)
    ofs << s;  
    ofs << "\n" ;
    string s3 = "world";
    ofs << s3;
    ofs.close();

    // You can also add multiple strings on separate lines

*/

}