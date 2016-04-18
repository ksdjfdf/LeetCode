#include "string"
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		int length = s.length();
        int current = 0, longest = 0, next = 1;
		bool bRepetition;
		while (length - 1 - current > longest) {
			bRepetition = false;
			for (int i = current + 1; i < next; i++) {
				if (count(s.begin() + current, s.begin() + next, s[i]) > 1) {
					++current;
					next = current + 1;
					bRepetition = true;
					break;
				}
			}
			if (!bRepetition && (next - current) > longest) {
				longest = next - current;
			}
			++next;
		};
		return longest;
    }
};