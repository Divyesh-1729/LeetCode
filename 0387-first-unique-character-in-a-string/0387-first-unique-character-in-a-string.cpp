class Solution {
public:
    int firstUniqChar(string s) {
// for(int i = 0; i < s.size(); i++) {
//             bool unique = true;
//             for(int j = 0; j < s.size(); j++) {
//                 if(i != j && s[i] == s[j]) {
//                     unique = false;
//                     break;
//                 }
//             }
//             if(unique)
//                 return i;
//         }
//         return -1;


        unordered_map<char, int> mp;

   
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        for(int i = 0; i < s.size(); i++) {
            if(mp[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};

