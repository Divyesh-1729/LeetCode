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
    int getDecimalValue(ListNode* head) {
        vector<int>vec;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            vec.push_back(temp->val);
            temp = temp->next;
        }
        int ans = 0;
        int power = vec.size()-1;
        for(int i =0;i<vec.size();i++)
        {
            if(power<0)
            {
                break;
            }
            int digit = vec[i] * pow(2,power);
            ans = ans+digit;
            power--;
        }
        return ans;
    }
};