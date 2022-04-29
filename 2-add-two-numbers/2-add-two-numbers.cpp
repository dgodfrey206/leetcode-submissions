/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        int carry = 0;
        ListNode res;
        ListNode* cur = &res;
        while (l1 && l2) {
            int sum = carry + l1->val + l2->val;
            cur->next = new ListNode(sum % 10);
            carry = sum / 10;
            cur = cur->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1) {
            sum = carry + l1->val;
            carry = sum / 10;
            cur->next = new ListNode(sum % 10);
            cur = cur->next;
            l1 = l1->next;
        }
        while (l2) {
            sum = carry + l2->val;
            carry = sum / 10;
            cur->next = new ListNode(sum % 10);
            cur = cur->next;
            l2 = l2->next;
        }
        if (carry)
            cur->next = new ListNode(carry);
        return res.next;
    }
};