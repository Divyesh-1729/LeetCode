class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                if ((long long)arr[j] == (long long)arr[i] * 2) {
                    return true;
                }
                if(arr[i] == arr[j] * 2)
                {
                    return true;
                }
            }
        }
        return false;
    }
};

