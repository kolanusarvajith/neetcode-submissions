class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        int n = heights.size();
        int i = 0 , j = n - 1;
        while(i < j){
            int curr = (j - i) * min(heights[i] , heights[j]);
            ans = max(ans , curr);
            if(heights[i] < heights[j]) i++;
            else j--;
        }

        return ans;
    }
};
