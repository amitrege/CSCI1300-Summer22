#include <iostream>
#include <vector>

using namespace std;

int main() {

    // You need to "create space" in an empty vector
    
    // Arrays have "space" in memory already, you just need to initialize 
    // values   
    int a[10];
    cout << a[5] << endl;

    vector<int> b(10);
    cout << b[5] << endl;

    vector<int> c;
    //cout << c[5] << endl;


    //int a[];

    cout << a[21] << endl;

}