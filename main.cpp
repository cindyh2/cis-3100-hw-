//
//  main.cpp
//  Homework 3
//
//

#include <iostream>
#include <memory>

using namespace std;

int main() {
   // creating an int variable num and set it = to 42;
    int num = 42;
    
    //creating a pointer to the integer
    int* pNum = &num;
    
    // creating a pointer to a pointer to an integer
    int** ppNum = &pNum;
    
    // printing pNum
    cout << "Using Pointer: " << *pNum << endl;
    // print the pointer to the pointer
    cout << "Using the pointer to the pointer: " << **ppNum << endl;
    
    // Explanation:
    // first started with declaring the integer variable named num and intialized int to 42
    // the pointer pNum stores the direction of num, meaning that pNum is now connected to num through its memory location
    // and then ppNum stores the address of pNum, therefore storing its memory location as well
    // therefore int, pNum, and ppNum are connected through their address and print out 42
    return 0;
}
