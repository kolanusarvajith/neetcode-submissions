class Solution {
public:
    void dfs(vector<vector<int>>&adj , int i , vector<int>&vis){
        vis[i] = 1;
        for(int k : adj[i])
            if(!vis[k])
                dfs(adj , k , vis);
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto&x : edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<int>vis(n , 0);
        int cnt = 0;
        for(int i = 0 ; i < n ; i++)
            if(!vis[i]){
                dfs(adj , i , vis);
                cnt++;
            }
        return cnt;
    }
};
