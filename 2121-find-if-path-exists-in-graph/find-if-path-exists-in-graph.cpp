class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> grph(n);

        for(auto& e : edges){
            grph[e[0]].push_back(e[1]);
            grph[e[1]].push_back(e[0]);
        }

        vector<bool> vis(n, false);
        queue<int> q;
        q.push(source);
        vis[source] = true;

        while(q.size() != 0){
            int node = q.front();
            q.pop();
            if(node == destination) return true;

            for(int x : grph[node]){
                if(!vis[x]){
                    vis[x] = true;
                    q.push(x);
                }
            }
        }
        
    return false;
    }
};