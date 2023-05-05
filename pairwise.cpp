#include <iostream>
#include <vector>
#include "pairwise.h"

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
    std::vector <int> v; 
    if (v1.size() < v2.size()) { // Determine which vector is smaller
        for (int i = 0; i < v1.size(); i++) {
            v.push_back(v1[i] + v2[i]); 
        }  
    }
    if (v2.size() < v1.size()) { // Determine which vector is smaller
        for (int i = 0; i <  v1.size(); i++) {
            v.push_back(v1[i] + v2[i]); 
        }
    }
return v; 
}