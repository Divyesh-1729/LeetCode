class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int cell = n * n;
        int count = 0;
        while( cell> 0 && maxWeight>=w)
        {
            maxWeight = maxWeight - w;
            cell--;
            count++;
            
        }
        return count;
    }
};