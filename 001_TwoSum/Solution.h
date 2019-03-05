#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		int size = nums.size(), diff = 0, temp = 0;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (nums[j] == target - nums[i]) {
					vector<int> result;
					result.push_back(i);
					result.push_back(j);
					return result;
				}
			}
		}
    }
};