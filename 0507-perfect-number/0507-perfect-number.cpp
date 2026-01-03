class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>elements;
        int sum=0;
        for(int i =1; i<= num/2;i++)
        {
            if(num%i==0)
            {
                elements.push_back(i);
            }
        }
        for(int i =0; i<elements.size();i++)
        {
            sum = sum + elements[i];
        }
        return sum == num;
    }
};