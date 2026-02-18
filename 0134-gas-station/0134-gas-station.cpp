class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas = 0;
        int totalcost = 0;
        for(int i : gas)
        {
            totalgas = totalgas +i;
        }
        for(int i : cost)
        {
            totalcost = totalcost +i;
        }
        if(totalcost>totalgas)
        {
            return -1;
        }

        //Ynuque soln exist
        int start = 0;
        int currgas = 0;

        for(int i = 0;i<gas.size();i++)
        {
            currgas = currgas + gas[i] - cost[i];
            if(currgas<0)
            {
                start = i+1;
                currgas =0;
            }
        }
    return start;
    }
};