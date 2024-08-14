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
         unordered_map<ListNode*, bool> mp;
    
    ListNode* current = head;
    ListNode* pos = head;
    while (current != nullptr) {
        if (mp.find(current) != mp.end()) {
            return pos;  // Cycle detected
        }
        
        // Mark this node as visited
        mp[current] = true;
        pos = pos->next;
        
        // Move to the next node
        current = current->next; 
    }
        return NULL;    
    }
};