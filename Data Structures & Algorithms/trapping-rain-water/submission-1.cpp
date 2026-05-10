class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prev(n) , nxt(n);

        vector<int> v; // This acts like monotonic stack
   
        for(int i = 0 ; i < n ; i++){
            if(v.empty() || height[i] > height[v.back()])
                v.push_back(i);
            
            prev[i] = v.back();
        }

        v.clear();

        for(int i = n - 1 ; i >= 0 ; i--){
            if(v.empty() || height[i] > height[v.back()])
                v.push_back(i);
            
            nxt[i] = v.back();
        }

        int ans = 0;

        for(int i = 0 ; i < n ; i++){
            ans += min(height[nxt[i]] , height[prev[i]]) - height[i];
        }

        return ans;

    }
};
