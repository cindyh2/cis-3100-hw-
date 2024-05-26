//
//  main.cpp
//  cis 3100 hw 3 q4
//
//

#include <iostream>
#include<memory>

using namespace std;

int main() {
    
    // smart pointers
    // use std:unique_ptr for automatic memory management
    std::unique_ptr<int[]> smartArray(new int[10]);
    
    // Initialize the array with values 1 through 10
    for (int i = 0; i < 10; i++) {
        smartArray[i] = i + 1; //intializing the array
    }
    
    // finding the sum of the values in the array
    int sums = 0;
    for (int i = 0; i < 10; i++) {
        sums += smartArray [i];
    }
    
    cout << "Sum with the smart pointer: " << sums << endl;
    //smartArray will be automatically deleted

    
    // using std::unique_ptr ensures that the allocated memory is deallocated as soon as the pointer is not utilized (out of scpre) anymore
    // this is especially useful when a dynamic array is not added in a coding session
    
    return 0;
}
