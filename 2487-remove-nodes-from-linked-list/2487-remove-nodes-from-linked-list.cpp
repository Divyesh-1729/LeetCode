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
 #include<stack>
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        
        stack<int>st;
        ListNode* temp  = head;
        while(temp!=NULL)
        {
            st.push(temp->val);
            temp= temp->next;
        }

        int max = 0;
        ListNode* nhead=NULL;

        while(!st.empty())
        {
            int val = st.top();
            st.pop();

            if(val>=max)
            {
                ListNode* node = new ListNode(val);
                node->next=nhead;
                nhead=node;
                max =val;
            }
        }

        return nhead;
    }
};