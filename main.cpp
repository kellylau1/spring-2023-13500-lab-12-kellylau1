#include <iostream>
#include <vector>
#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"

int main () {

//Task A
std::vector <int> v = makeVector(10); 
for (int num : v) {
    std::cout << num << " "; 
}
std::cout << std::endl; 

//Task B
std::vector<int> v1 {1,2,-1,3,4,-1,6};
std::vector<int> v2 = goodVibes(v1);
for (int i = 0; i < v2.size(); i++) {
    std::cout << v2[i] << " ";
}
std::cout << std::endl; 

//Task C
std::vector<int> v3{1,2,3};
std::vector<int> v4{4,5};
gogeta(v3, v4); 
for (auto it = v3.begin(); it != v3.end(); it++) {
    std::cout << *it << " ";
}
std::cout << std::endl; 

//Task D
std::vector<int> vec1{1,2,3};
std::vector<int> vec2{4,5};
std::vector <int> finalvec = sumPairWise(vec1, vec2);
for (auto it = finalvec.begin(); it != finalvec.end(); it++) {
    std::cout << *it << " ";
}


return 0; 
}