#include <climits>

class Solution {
public:
	int reverse(int x) {
		long long res = 0;
		do {
			res = res * 10 + x % 10;
			x /= 10;
		} while (x != 0);
		return (res > INT_MAX || res < INT_MIN) ? 0 : res;
	}
};