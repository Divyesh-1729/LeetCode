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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int>mp;
        ListNode* temp=head;

        while(temp!=NULL)
        {
            mp[temp->val]++;
            temp =temp->next;
        }


        ListNode* tp=new ListNode(0);
        ListNode* tail=tp;

        temp=head;

        while(temp!=NULL)
        {
            if(mp[temp->val]==1)
            {
                tail->next=new ListNode(temp->val);
                tail= tail->next;
            }
            temp=temp->next;
        }


        return tp->next;
    }
};