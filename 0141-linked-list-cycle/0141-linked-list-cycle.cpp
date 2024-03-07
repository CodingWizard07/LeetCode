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
        ListNode* temp = head;
        ListNode* tail = head;
    
        //moving tail and temp till noany linked node is gained
        while(tail !=NULL && tail->next !=NULL){
            tail= tail->next->next;
            temp=temp->next;
            
            
            //if tail and temp come at same point
            if(tail == temp){
                
                return true;
            }   
        }
        return false;    
    }
};
    