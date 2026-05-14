#include "TwoSum.hpp"

std::vector<int> Solution::twoSum(const std::vector<int> &nums, int target){
	std::unordered_map<int, int> datas;
	datas.reserve(nums.size());
	for (int i = 0; i < nums.size(); i ++){
		int need = target - nums.at(i);
		std::unordered_map<int,int>::iterator data = datas.find(need);
		if (data != datas.end())
			return {i, data->second};
		datas.insert({nums.at(i), i});
	}
	return {};
}






