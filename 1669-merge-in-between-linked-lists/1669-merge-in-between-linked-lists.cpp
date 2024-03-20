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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(list1->next == NULL){
            return list1;
        }
        else{
        ListNode *temp1 = list1;
        ListNode *temp2 = list1;
        ListNode *temp3 = list2;
        
        //moving temp1 until it reaches the node prev to a position
        int c1 = 0;
        while(c1<a-1){
            temp1 = temp1->next;
            c1++;
        }
        //node for deletion
        ListNode*curr = temp1->next;
        //moving temp2 until it reaches b position
        int c2 = 0;
        while(c2<b){
            temp2=temp2->next;
            c2++;
        }
        //taking temp3 to the last node
        int c3 = 0;
        while(temp3->next != NULL){
            temp3 = temp3->next;
            c3++;
        }
        
        temp1->next = list2;
        temp3->next = temp2->next;
        temp2->next = NULL;
        
        //Deleting and freeing memory for the excluded part
        ListNode* nextNode;
        while(curr != NULL)
        {
            nextNode = curr->next;
            delete(curr);
            curr=nextNode;
        }
        
        return list1;
        }
       
    }
};