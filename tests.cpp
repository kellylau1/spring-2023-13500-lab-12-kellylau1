#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <vector>
#include "doctest.h"
#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"

TEST_CASE("Task A: Vectors") {
	CHECK(makeVector(10) == std::vector<int> {0,1,2,3,4,5,6,7,8,9}); 
}

TEST_CASE("Task B: Optimism") {
	std::vector<int> v{1,2,-1,3,4,-1,6};
	CHECK(goodVibes(v) == std::vector<int> {1,2,3,4,6});  
}


TEST_CASE("Task C: Fusion") {
	std::vector<int> v3{1,2,3};
	std::vector<int> v4{4,5};
	gogeta(v3,v4); 
	CHECK(v3 == std::vector<int> {1,2,3,4,5});
}

TEST_CASE("Task D: Pairwise") {
	std::vector<int> vec1{1,2,3};
	std::vector<int> vec2{4,5};
	std::vector <int> finalvec = sumPairWise(vec1, vec2);
	CHECK(finalvec == std::vector<int> {5,7,3});
}
