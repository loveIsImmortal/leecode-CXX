#include <iostream>
#include <TwoSum.hpp>

int main(){
	Solution obj;
	std::vector<int> datas = {1, 2, 3, 5, 10};
	int target = 7;
	std::vector<int> result = obj.twoSum(datas, target);
	for (int item : result)
		std::cout << item << "\t";
	std::cout << std::endl;
	return 0;
}
