#pragma once

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
		ListNode *ptr1 = l1, *ptr2 = l2, *result, *current;
		result = new ListNode((ptr1->val + ptr2->val) % 10);
		carry = (ptr1->val + ptr2->val) / 10;
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
				current->next = new ListNode((ptr1->val + ptr2->val + carry) % 10);
				carry = (ptr1->val + ptr2->val + carry) / 10;
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			} else {
				if (NULL == ptr1) {
					current->next = new ListNode((ptr2->val + carry) % 10);
					carry = (ptr2->val + carry) / 10;
					ptr2 = ptr2->next;
				} else {
					current->next = new ListNode((ptr1->val + carry) % 10);
					carry = (ptr1->val + carry) / 10;
					ptr1 = ptr1->next;
				}
			}
			current = current->next;
		}
    }
};