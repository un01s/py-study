/*
 * leetcode 2867
 *
 */

struct union_find {
    vector<int> parent;
    int n;
    union_find(int n) : n(n) { clear(); }
    inline void clear(){ parent.assign(n, -1); }
    inline int find(int u){ return (parent[u] < 0) ? u : parent[u] = find(parent[u]); }
    inline bool same(int u, int v){ return find(u) == find(v); }
    inline bool join(int u, int v){
        u = find(u);
        v = find(v);
        if (u != v){
            if (parent[u] > parent[v])
                swap(u, v);
            parent[u] += parent[v];
            parent[v] = u;
        }
        return u != v;
    }
    inline int size(int u){ return -parent[find(u)]; }
};

class Solution {
public:
    long long countPaths(int n, vector<vector<int>>& edges) {
        vector<int> isp(n + 1, 1);
        isp[1] = 0;
        for(int i = 2; i <= n; i++){
            if(!isp[i]) continue;
            for(int j = i + i; j <= n; j += i) isp[j] = 0;
        }
        union_find uf(n + 1);
        vector<vector<int>> adj(n + 1);
        for(int i = 0; i < n - 1; i++){
            int u = edges[i][0], v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i = 1; i <= n; i++){
            if(isp[i]) continue;
            for(int j : adj[i]){
                if(isp[j]) continue;
                uf.join(i, j);
            }
        }
        using ll = long long;
        ll ans = 0;
        for(int i = 1; i <= n; i++){
            if(!isp[i]) continue;
            ll all = 1;
            for(int j : adj[i]){
                if(isp[j]) continue;
                ans += all * uf.size(j);
                all += uf.size(j);
            }
        }
        return ans;    
    }
};

