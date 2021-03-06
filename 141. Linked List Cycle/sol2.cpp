//sol 2

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
    bool hasCycle(ListNode *head) {
        auto slow = head;
        auto fast = head;
        
        while(fast) {
            if(fast->next == nullptr) return false;
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        
        return false;
    }
};
