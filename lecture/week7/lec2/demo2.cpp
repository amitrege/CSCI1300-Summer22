#include <iostream>
#include <string>
#include <vector>
#include "question.h"
#include "choicequestion.h"
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


   // Ask a choice question
   ChoiceQuestion q2;
   q2.set_text("In which country was the inventor of C++ born?");
   q2.add_choice("Australia", false);
   q2.add_choice("Denmark", true);
   q2.add_choice("Korea", false);
   q2.add_choice("United States", false);
   q2.display();
   
   cout << "Your answer: ";
   getline(cin, response);
   cout << q2.check_answer(response) << endl;   
   return 0;
}