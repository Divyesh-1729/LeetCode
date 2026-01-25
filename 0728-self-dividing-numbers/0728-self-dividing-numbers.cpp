class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>nums;
        for(int i =left;i<=right;i++)
        {   
            int temp = i;
            bool divisibleahe = true;
           
           while(temp > 0)
            {
                int digit = temp % 10;

                if(digit==0 || i % digit != 0)
                {
                    divisibleahe = false;
                    break;
                }

                temp = temp/ 10;
            }
            if(divisibleahe == true)
            {
                nums.push_back(i);
            }
            

        }
        return nums;
    }
};