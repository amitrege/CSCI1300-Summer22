#include <iostream>
#include <string>
#include <vector>
#include "question.h"

int main()
{
   string response;
   cout << boolalpha;    // to print 1 as true and 0 as false
   // Ask a basic question
   Question q1;
   q1.set_text("Who was the inventor of C++?");
   q1.set_answer("Bjarne Stroustrup");
   q1.display();
   
   cout << "Your answer: ";
   getline(cin, response);
   cout << q1.check_answer(response) << endl;
   return 0;
}