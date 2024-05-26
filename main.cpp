//
//  main.cpp
//  cis 3100 hw 3 q2
//
//  Created by Cindy Hernandez on 5/25/24.
//

#include <iostream>
using namespace std;

int main() {
    // pointers and arrays
    //creating the array with the 5 values
    //declarinf our pointer and intializing it to the array
    double numbers [] = { 0.7, 2.7, 3.7, 4.7, 5.7 };
    double* pNumbers = numbers;
    
    //increasing each element by 1 using a pointer index
    for (int i = 0; i < 5; i++) {
        //increment each element by 1.0
        *pNumbers += 1.0;
        cout << *pNumbers << " ";
        pNumbers++; //moving the pointer to the next element
    }

    return 0;
}
