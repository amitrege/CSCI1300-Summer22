#include <iostream>

using namespace std;

// RECURSION
// Main idea: Solve large problems by solving smaller subproblems

// In turn, we solve these smaller subproblems with even smaller subproblems and so on
// Therefore, we need some problem which cannot be divided further (otherwise the program would never stop)

// A recursive function needs :
// 1. A Base case (when to stop)
// 2. A recursive case (when to continue dividing)

// Example : Factorial
// Base Case -> When n = 1, Factorial(1) = 1
// Recursive Case -> When n is > 1, Factorial(n) = n * Factorial(n-1)

int fact(int n) {
    // Base Case
    if (n == 1) {
        return 1;
    }
    // Recursive Case
    else {
        return n*fact(n-1);
    }
}

// Example:
// F(0) = 1; F(1) = 2 
// F(n) = F(n-1) * F(n-2)

/*
                              Recursive(5) 
                              /         \ 
                             /           \ 
                            /             \ 
                           /               \ 
                          /                 \ 
                       R(4)        *        R(3) 
                       /  \                 /  \ 
                      /    \               /    \ 
                     /      \             /      \ 
                    /        \           /        \ 
                   /          \         /          \ 
                 R(3)   *    R(2)    R(2)    *    R(1) 
                 /\           /\       |  \         \ 
                /  \         /  \      |   \         \ 
               /    \       /    \     |    \         \ 
              /      \     /      \    |     \         \ 
             R(2) * R(1)  R(1) * R(0) R(1) * R(0)       2 
              /\      |    |      |    |      | 
             /  \     |    |      |    |      | 
            /    \    |    |      |    |      | 
           /      \   |    |      |    |      | 
          R(1) * R(0) 2    2      1    2      1 
          |       | 
          |       | 
          |       | 
          |       | 
          2       1

*/

int Recursive(int n) { 
  cout << n << endl; 
  // Base Cases
  if (n == 0) return 1; 
  if (n == 1) return 2; 
  // Recursive Case
  return (Recursive(n - 1) * Recursive(n - 2)); 
}


// Can also pass around vectors, strings or arrays as part of recursion
// See 'is_palindrome' problem on practice set

int findSum(int A[], int N)
{
    if (N <= 0){
        return 0;
    }

    return (findSum(A, N - 1) + A[N - 1]);
}

// Another implementation with an extra param
int findSum(int A[], int size, int index)
{
    if (index == size) {
        return 0;
    }
    
    return (findSum(A, size, index + 1) + A[index]);
}

// If we are passing around vectors/Strings, we don't need to pass a size parameter
// vector.size() is available



int main(void) {
    cout << fact(4) << endl;

    
    int size = 5;
    int A[size];
    
    for(int i = 0; i < 5; i++) {
        cin >> A[i];
    }
    cout << findSum(A, size) << endl;
    
    cout << findSum(A, size, 0) << endl;
    
}