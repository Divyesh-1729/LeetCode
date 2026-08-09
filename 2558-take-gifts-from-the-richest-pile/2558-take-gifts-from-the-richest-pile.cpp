class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        // int n=gifts.size();
        
        // while(k>0)
        // {
        //     sort(gifts.begin(),gifts.end());
        //     int maxi = gifts[n-1];
        //     gifts[n-1]=floor(sqrt(maxi));
        //     k--;
        // }
        // long long ans =0;
        // for(int  i=0;i<gifts.size();i++)
        // {
        //     ans = ans+gifts[i];
        // }
        // return ans;   BRUTE FORCE AHE PRIORITY QUEUE NE SOLVE KARAVA..

        priority_queue<int>hp;
        for(int i=0;i<gifts.size();i++)
        {
            hp.push(gifts[i]);
        }
        while(k>0)
        {
            int num=hp.top();
            hp.pop();
            int changed=floor(sqrt(num));
            hp.push(changed);

            
            k--;
        }
        long long sum =0;
        while(!hp.empty())
        {
            sum = sum+hp.top();
            
            hp.pop();
        }
        return sum;
    }
};