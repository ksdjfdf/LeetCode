#include <string>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
		int size = s.size();
		if (size < 2) {
			return s;
		}
		int current = 0, head = 0, rear = 0, start = 0, longest = 1;
		while (longest <= (size - current) * 2) {
			head = rear;
			// Find the first element which is not equals with the next one
			while (s[rear] == s[rear + 1]) {
				++rear;
			}
			current = rear;
			while (head > 0 && s[head - 1] == s[rear + 1]) {
				++rear;
				--head;
			}
			if (rear - head + 1 > longest) {
				longest = rear - head + 1;
				start = head;
			}
			rear = ++current;
		}
		return s.substr(start, longest);
	}
};