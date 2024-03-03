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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr)
            return head;

        // Count the number of nodes in the SLL
        int size = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        int position = size - n;
        
        // If the node to remove is the head
        if (position == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Deleting element
        ListNode* prev = nullptr;
        ListNode* curr = head;
        int count = 0;
        while (count < position) {
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        delete curr;

        return head;
    }
};
