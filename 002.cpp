struct ListNode {
	int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode result(0), *p = &result;
		int extra = 0;
		while (l1 || l2 || extra) {
			if (l1) extra += l1->val, l1 = l1->next;
			if (l2) extra += l2->val, l2 = l2->next;
			p->next = new ListNode(extra % 10);
			extra /= 10;
			p = p->next;
		}
		return result.next;
	}
};