#include "iostream"
#include "Solution.h"

ListNode* create(int* a, int length) {
	ListNode *head = new ListNode(a[0]);
	ListNode *ptr = head;
	for (int i = 1; i < length; i++) {
		ptr->next = new ListNode(a[i]);
		ptr = ptr->next;
	}
	return head;
}
void main()
{
	Solution s;
	int a1[] = {2, 4, 3}, a2[] = {5, 6, 4};
	ListNode *l1 = create(a1, 3), *l2 = create(a2, 3);
	ListNode *result = s.addTwoNumbers(l1, l2);
	system("pause");
}