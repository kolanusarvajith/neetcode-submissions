class Priority{
public:
    bool operator()(auto&a , auto&b){
        return a.first < b.first;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        for(int i : nums)
            mp[i]++;

        priority_queue<pair<int , int> , vector<pair<int , int>> , Priority>pq;
        for(auto&x : mp)
            pq.push({x.second , x.first});

        vector<int> ans;
        for(int i = 0 ; i < k ; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
