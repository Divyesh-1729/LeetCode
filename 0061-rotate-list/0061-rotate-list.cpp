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
    ListNode* rotateRight(ListNode* head, int k) {
        int length = 0;
        if(head == NULL || k==0)
        {
                return head;    //VVVVVVV IMP
        }
        ListNode* tail = head;  //Agodar length kadhaychio
        while(tail!=NULL)
        {

            length++;
            tail = tail->next;
        }

        k = k %length;
        if(k==0)
        {
            return head;
        }
        ListNode* temp = head;
        int shift = length-k;
        for(int i = 1; i < shift; i++)
        {
            temp = temp->next;
        }


        ListNode* newHead = temp->next;
        temp->next = NULL;

        ListNode* curr = newHead;
        while(curr->next !=NULL)
        {
            curr = curr->next;
        }

        curr->next = head;

        return newHead;

    }
};