#pragma once

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0, sum = 0;
		ListNode *ptr1 = l1, *ptr2 = l2, *result, *current;
		sum = (ptr1->val + ptr2->val) % 10;
		carry = (ptr1->val + ptr2->val) / 10;
		result = new ListNode(sum);
		current = result;
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
		while (true) {
			if (NULL == ptr1 && ptr2 == NULL) {
				if (1 == carry) {
					current->next = new ListNode(1);
				}
				return result;
			} else if (ptr1 != NULL && ptr2 != NULL) {
				sum = (ptr1->val + ptr2->val + carry) % 10;
				carry = (ptr1->val + ptr2->val + carry) / 10;
				current->next = new ListNode(sum);
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			} else {
				if (NULL == ptr1) {
					sum = (ptr2->val + carry) % 10;
					carry = (ptr2->val + carry) / 10;
					current->next = new ListNode(sum);
					ptr2 = ptr2->next;
				} else {
					sum = (ptr1->val + carry) % 10;
					carry = (ptr1->val + carry) / 10;
					current->next = new ListNode(sum);
					ptr1 = ptr1->next;
				}
			}
			current = current->next;
		}
    }
};