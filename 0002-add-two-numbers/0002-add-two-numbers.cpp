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
        ListNode* dummy = new ListNode();
        ListNode* res = dummy;
        ListNode* travel1 = l1;
        ListNode* travel2 = l2;
        int carry = 0;
        while(travel1 != nullptr && travel2 != nullptr) {
            dummy->next = new ListNode((travel1->val + travel2->val + carry) % 10);
            if(travel1->val + travel2->val + carry >= 10) carry = 1;
            else carry = 0;
            dummy = dummy->next;
            travel1 = travel1->next;
            travel2 = travel2->next;
        }
        while(travel1 != nullptr) {
            dummy->next = new ListNode((travel1->val + carry) % 10);
            if(travel1->val + carry >= 10) carry = 1;
            else carry = 0;
            dummy = dummy->next;
            travel1 = travel1->next;
        }
        while(travel2 != nullptr) {
            dummy->next = new ListNode((travel2->val + carry) % 10);
            if(travel2->val + carry >= 10) carry = 1;
            else carry = 0;
            travel2 = travel2->next;
            dummy = dummy->next;
        }
        if(carry == 1) dummy->next = new ListNode(1);
        ListNode* sum = res->next;
        delete res;
        return sum;
    }
};