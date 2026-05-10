class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int>mp;
        int ans = 0;
        int curr_start = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(mp.count(s[i])){
                curr_start = max(curr_start , mp[s[i]] + 1);
            }
            mp[s[i]] = i;
            ans = max(ans , i - curr_start + 1);
        }

        return ans;
    }
};
