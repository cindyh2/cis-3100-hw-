//
//  main.cpp
//  cis 3100 hw 3 q3
//
//

#include <iostream>
#include<memory>
using namespace std;

//dynamic memory allocation

int main() {
    // dynamically allocating an array of 10 integers
    int* dynamicArray = new int [10];
    //create a pointer to the dynamic array
    int* temp = dynamicArray;
    
    // initializing the array with values using a loop
    for (int i = 0; i < 10; i++) {
        *temp = i + 1;
        temp++;
    }
    
    //find the sum of all of the elements in the dynamic array above
    //reset pointer to the start of the array
    temp = dynamicArray;
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += *temp;
        cout << *temp << " ";
        temp++;
    }
    
    //computing and printing the sum
    cout << endl;
    cout << "Sum: " << sum << endl;
    
    //deallocate the memory and setting pointer to nullptr
    delete[] dynamicArray;
    dynamicArray = nullptr; //setting pointer
    
    return 0;
}
