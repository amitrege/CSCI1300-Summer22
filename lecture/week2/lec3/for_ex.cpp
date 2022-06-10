#include <iostream>

using namespace std;
/*
    while(condition)
    {
        statements;
    }
*/

/*
    // loop variable - i,j
    for (initialization; condition; update) // i++ -> i = i + 1; i-- -> i = i - 1
    { 
        statements; // also called loop body
    }
    // count something, when you know how many times the loop will be executed
    
    OR
    initialization;
    while(condition)
    {
        statements;
        update;
    }
*/

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num; // 5
    
    cout << "-------- Example 1 -------------"<< endl;
    // print numbers from 1 -> num == 1 2 3 .... num
    for (int i = 1; i <= num; i++) // off by 1; ,< num + 1 // 1
    {
        cout << i << endl;
        // update
    }

    cout << endl;
    cout << "-------- Example 2 -------------"<< endl;
    // Print remainders for number from 0 to num w.r.t 5
    for (int i = 0; i <= num; i++) // Start from 0, < num 
    {
        cout << "The remainder of "<< i << " when divided by 5 is "<< i % 5 << endl;
        // update
    }
   
    
    cout << endl;
    cout << "-------- Example 3 -------------"<< endl;
    // print every other number from 2 -> num -- 2 4 6 8 10 12 14 ..
    // approach 1
    // Essentially, we pick multiples of 2
    for(int i = 2; i < num; i++)//Note start from 2 instead of 0
    {
        if( i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    cout << endl;
    // approach 2
    for(int i = 2; i < num; i+=2)// i = i + 2; i*=2
    {
        // more efficient; skips every other number
        cout << i << endl;
    }

    cout << endl;
    cout << "-------- Example 4 -------------"<< endl;
    //Compute the factorial function 
    // N! = N * (N-1) * (N-2) * ........ * 2 * 1
    // 5! = 5*4*3*2*1

    int factorial  = 1;
    for (int i = 1; i <= num; i++){// start at 1, <=
        factorial = factorial * i; 
    }

    /*
    Alternatives:
    for (int i = 1; i < (num + 1) ; i++){
        factorial = factorial * i; 
    }
    */

   /*
    These won't work:

    Start cannot be 0, multiplying anything with 0 is 0:
    for (int i = 0; i < num ; i++){
        factorial = factorial * i; 
    } 

    Loop will stop after i = num - 1:
    for (int i = 1; i < num ; i++){
        factorial = factorial * i; 
    }
   */

    cout << "The factorial of " << num << " is " << factorial << endl;

    /*
        Note we have reused and redefined the loop variable i in 
        every single loop.
        
        The scope (lifetime) of i is only limited to the loop.Therefore, 
        it cannot be used outside the loop it is defined in.
        
        Since 'i' is no longer 'alive' outside the loop, we are free
        to redefine a variable of the same name.
    */

    
    
    return 0;
}