#include <iostream>
using namespace std;

int main()
{

    // Misplacing semi colons can cause hard-to-find. bugs in programs
    // Example:
    /*
        if (condition); {          <- if statement ends here
            .....                  <- statements inside braces always
                                      executed                               
        }
        
        instead of 
        
        if (condition) {
            .......
        }                           <- if statement ends here
    */
   // Essentially the if statement inthe first example does nothing
   // The compiler thinks that the if statement block is empty

   int x = 5;

   if(x < 3 ){
        cout <<"Hello"<< endl;
   }

    return 0;
}