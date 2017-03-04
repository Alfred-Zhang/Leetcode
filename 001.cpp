#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> hash;
		vector <int> result;
		for (int i = 0; i < nums.size(); i++) {
			int compliment = target - nums[i];
			if (hash.find(compliment) != hash.end()) {
				result.push_back(hash[compliment]);
				result.push_back(i);
			}
			else {
				hash[nums[i]] = i;
			}
		}
		return result;
	}
};