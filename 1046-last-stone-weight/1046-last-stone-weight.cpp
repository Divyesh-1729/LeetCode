class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n =stones.size();
        sort(stones.begin(),stones.end(),greater<int>());
        priority_queue<int>hp;
        for(int i=0;i<n;i++)
        {
            hp.push(stones[i]);
        }
        while(hp.size()>1)
        {
            int first=hp.top();



            hp.pop();

            int second=hp.top();
            hp.pop();

            if (first!=second) 
            {
                hp.push(first-second);
            }
        }

        if (hp.empty())
        {
            return 0;
        }
        return hp.top();
        


    }
};