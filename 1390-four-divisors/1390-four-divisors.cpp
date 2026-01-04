class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        
        //int count = 0;
        int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            vector<int>divisors;
            for(int j=1;j<=sqrt(nums[i]);j++)
            {
                if(nums[i]%j==0)
                {
                    //count++;  //Ha pan approach barobar ahe pan SC vadhte
                    divisors.push_back(j);
                
                if (j != nums[i] / j)   //He mi visarto
                        divisors.push_back(nums[i] / j);

                    if (divisors.size() > 4)   //HE MI VISARTO
                        break;

                }
            }
            if (divisors.size() == 4) {
                for (int d : divisors)
                    sum += d;
            }
        }
        return sum;
    }
};