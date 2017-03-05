#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		unordered_map<char, int> hash;
		int begin = 0, maxLength = 0;
		for (int i = 0; i<s.size(); i++) {
			if (hash.find(s[i]) != hash.end()) {
				begin = max(begin, hash[s[i]] + 1);
			}
			hash[s[i]] = i;
			maxLength = max(maxLength, i - begin + 1);
		}
		return maxLength;
	}
};