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
    bool isPalindrome(ListNode* head) {
        
       if(head==NULL || head->next == NULL){
           return head;
       } 
        //counting size of array using LL
        int count = 0;
        ListNode* listsize = head;
        while(listsize != NULL){
            listsize = listsize->next;
            count++;
            
        }
        
        int arr[count];
        int k = 0;
        ListNode *temp = head;
        while(temp != NULL){
            arr[k++]=temp->val;
            temp=temp->next;
        }
        
        int i=0;
        int j=count-1;
        while(i<=j){
            if(arr[i]!=arr[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
            
        }
        return true;
        
    }
};