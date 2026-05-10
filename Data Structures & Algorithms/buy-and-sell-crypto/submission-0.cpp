class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = INT_MIN;
        int min_prev = prices[0];
        for(int i = 1 ; i < prices.size() ; i++){
            ans = max(ans , -min_prev + prices[i]);
            min_prev = min(min_prev , prices[i]);
        }

        return max(0 , ans);
    }
};
