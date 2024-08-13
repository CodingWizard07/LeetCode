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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* temp = head;
        int length = 1;
        
        while(temp->next != NULL)
        {
            temp = temp->next;
            length++;
        }
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        int index = 0;
        while(index < length/2 )
        {
            prev = curr;
            curr = curr->next;
            index++;
        }
        return curr;
    }
};