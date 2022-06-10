#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // How many spoonfuls of fruit loops should I eat every morning?
    int maximum;  //this is the maximum number of FL I can have = 1 serving
    int spoon = 5;      //how many FL in a spoonful?
    int total = 0;
    int count = 0;  // spoon counter

    cout << "How many fruit loops can I have today?"<< endl;
    cin >> maximum;
    
    while(total < maximum)
    {
        // add spoon to total   
        total = total + spoon; // total+=spoon
        // increment spoon/counter
        count++;
    }
    /*
        You can see that the loop will only stop AFTER total is already
        greater than the maximum. 
        Therefore, you will get some extra fruit loops beyond just the
        maximum. 
    */
    cout << "you have had " << count << " spoons of fruit loops today" << endl;
    return 0;
}