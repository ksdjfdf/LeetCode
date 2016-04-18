#include "iostream"
#include "Solution.h"
using namespace std;

void main() {
	int a[] = {2, 7, 11, 15};
	vector<int> data(a, a + 4);
	Solution s;
	vector<int> re = s.twoSum(data, 18);
	system("pause");
}