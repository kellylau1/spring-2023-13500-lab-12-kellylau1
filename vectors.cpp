#include <iostream>
#include "vectors.h"

//Note: Vectors resize itself automatically, so you don't have to specify size like an array 

//Task A
std::vector<int> makeVector(int n) {
    std::vector <int> v; //creates a vector of integers that is called 'v'
    for (int i = 0; i <= (n-1); i++ ) {
        v.push_back(i); //Inserting elements into the vector
    }
return v; 
}
