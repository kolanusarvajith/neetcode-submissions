class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto&x : edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<int>vis(n , 0);
        int cnt = 0;
        queue<int>q;
        for(int i = 0 ; i < n ; i++)
            if(!vis[i]){
                cnt++;
                q.push(i);
                vis[i] = 1;
                while(!q.empty()){
                    int x = q.front();
                    q.pop();
                    for(int y : adj[x]){
                        if(!vis[y]){
                            vis[y] = 1;
                            q.push(y);
                        }
                    }
                }
            }
        return cnt;
    }
};
