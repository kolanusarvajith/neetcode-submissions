class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int>mp;
        for(int i : nums)
            mp[i]++;

        int n = nums.size();
        vector<vector<int>> freq(n + 1);

        for(auto&x : mp) freq[x.second].push_back(x.first);
        vector<int>ans;

        int j = k;
        for(int i = n ; i >= 0 && j > 0 ; i--){
            for(int p : freq[i]){
                ans.push_back(p);
                j--;
            }
        }

        return ans;
    }
};
