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
    ListNode* swapNodes(ListNode* head, int k) {
        int length  = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            length++;
            temp = temp->next;
        }

        int startnode = k;
        ListNode* Node1 = head;
        while(startnode-->1)
        {
            Node1 = Node1->next;
        }

        int endnode = length-k+1;
        ListNode* Node2 = head;
        while(endnode-->1)
        {
            Node2 = Node2->next;
        }

        swap(Node1->val,Node2->val);
        return head;
    }
};