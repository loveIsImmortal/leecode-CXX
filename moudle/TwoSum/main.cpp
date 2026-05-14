#include "TwoSum.hpp"
#include <iostream>

int main(int argc, char **argv){
	std::vector<int> nums{1,2,3,7};
	int target = 9;
	Solution solution;
	std::vector<int> results = solution.twoSum(nums, target);
	for (int result : results)
		std:: cout << result << std:: endl; 
	return 0;
}

