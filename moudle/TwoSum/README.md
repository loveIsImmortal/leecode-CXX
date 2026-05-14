# Two Sum

Given an array of integers `nums` and an integer `targets`, return indices of the two numbers such that they add to `target`.
You may assume that each input would have **exactly one solution**, and you may not use the same element twice.
You can return answer in any order.

**Example 1:**
```
Input: nums = [2, 7, 11, 15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```
**Example 2:**
```
Input: nums = [3, 2, 4], target = 6
Output: [1, 2]
```

**Example 3:**
```
Input: nums = [3, 3], target = 6
Output: [0, 1]
```

**Constraints:**
- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- **Only one valid answer exists. **

**Answer:**
```
First, create a hash-map that and set the size of the hash-map is equal to size of nums to storing visited element.
Afterwards, iterate through nums using index i, Return {i, nums[i]} if exists the 
difference between target and nums[i], then let map be appended {num{i}, i} in this.
```
