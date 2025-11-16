/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next) return nullptr;
        ListNode* slow = head;
        ListNode* fast = head->next;
        bool hasCycle = 0;
        while (fast && fast->next) {
            if (slow == fast) {
                hasCycle = 1;
                break;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        if (!hasCycle) return nullptr;
        unordered_map<ListNode*, int> set;
        slow = head;
        while (slow) {
            if (set.count(slow)) return slow;
            else {
                set.insert({slow, slow->val});
            }
            slow = slow->next;
        }
        return nullptr;
    }
};