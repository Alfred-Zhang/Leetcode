#include <string>

using namespace std;

class Solution {
public:
	string longestPalindrome(string s) {
		int maxLength = 1;
		int maxStart = 0;
		for (int i = 1; i<s.size(); i++) {
			int lo = i - 1, hi = i;
			while (lo >= 0 && hi<s.size() && s[lo] == s[hi]) {
				if (hi - lo + 1>maxLength) {
					maxLength = hi - lo + 1;
					maxStart = lo;
				}
				lo--;
				hi++;
			}
			lo = i - 1, hi = i + 1;
			while (lo >= 0 && hi<s.size() && s[lo] == s[hi]) {
				if (hi - lo + 1>maxLength) {
					maxLength = hi - lo + 1;
					maxStart = lo;
				}
				lo--;
				hi++;
			}
		}
		return s.substr(maxStart, maxLength);
	}
};