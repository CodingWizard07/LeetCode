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
      
    unordered_map<ListNode*, bool> mp;
    
    ListNode* current = head;
    while (current != nullptr) {
        if (mp.find(current) != mp.end()) {
            return true;  // Cycle detected
        }
        
        // Mark this node as visited
        mp[current] = true;
        
        // Move to the next node
        current = current->next; 
    }
        return false;
    }
};