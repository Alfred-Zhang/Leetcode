#include<string>

using namespace std;

class Solution {
public:
	string convert(string s, int numRows) {
		string res = "";
		if (numRows == 1) return s;
		int len = s.size();
		for (int i = 0; i<numRows; ++i) {
			int pos = i;
			int step1 = (numRows - i - 1) * 2;
			int step2 = i * 2;
			if (pos<len) {
				res += s.at(pos);
			}
			while (1) {
				pos += step1;
				if (pos >= len) break;
				if (step1 != 0) res += s.at(pos);

				pos += step2;
				if (pos >= len) break;
				if (step2 != 0) res += s.at(pos);
			}
		}
		return res;
	}
};