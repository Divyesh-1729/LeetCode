class Solution {
public:
    string frequencySort(string s) {

        // Step 1: Count frequency of each character using a hashmap
        // mp[c] stores how many times character 'c' appears in the string
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }

        // Step 2: Move all (char, frequency) pairs into a vector
        // because unordered_map cannot be sorted directly
        vector<pair<char,int>> v(mp.begin(), mp.end());

        // Step 3: Sort the vector in decreasing order of frequency
        // highest frequency character will come first
        sort(v.begin(), v.end(),
             [](auto &a, auto &b) {
                 return a.second > b.second;
             });

        // Step 4: Build the final string
        // Repeat each character according to its frequency
        // append(count, char) adds 'char' count times
        string ans = "";
        for (auto &p : v) {
            ans.append(p.second, p.first);
        }

        return ans;
    }
};
