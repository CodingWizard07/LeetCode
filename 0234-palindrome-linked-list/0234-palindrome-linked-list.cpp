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
    ListNode* reverse(ListNode* temp){
        if(temp == nullptr || temp->next == nullptr) {
            return temp;
        }
        ListNode* prev = nullptr;
        ListNode* curr = temp;
        ListNode* forward = nullptr;
        
        while(curr != nullptr){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return true;
        } 
        
        // Counting total number of nodes
        int count = 0;
        ListNode* listCount = head;
        while(listCount != nullptr){
            listCount = listCount->next;
            count++;
        }
        
        int n = count / 2;
        ListNode* temp1 = head;
        ListNode* temp2 = temp1->next;
        int i = 0;
        while(i < n - 1){ // Adjusted loop condition
            temp1 = temp1->next;
            temp2 = temp2->next;
            i++;
        }
        
        temp1->next = nullptr;
        ListNode* head1 = reverse(temp2);
        
        while(head != nullptr && head1 != nullptr){
            if(head->val != head1->val){
                return false;
            }
            else{
                head = head->next;
                head1 = head1->next;
            }
        }
        return true;
    }
};
