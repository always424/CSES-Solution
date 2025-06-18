#include <bits/stdc++.h>
using namespace std;

#define N 100005

vector<int> adj[N];
int vis[N];
int par[N]; 

void naf() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int u, v; 
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<int> q;
    vis[1] = 1;
    par[1] = -1;
    q.push(1);

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(auto v : adj[u]) {
            if(vis[v]) continue;

                vis[v] = 1;
                par[v] = u;
                q.push(v);
            
        }
    }

    if(!vis[n]) {
        cout << "IMPOSSIBLE\n";
        return;
    }


    vector<int> path;
    for(int u = n; u != -1; u = par[u])
        path.push_back(u);

    reverse(path.begin(), path.end());

    cout << path.size() << "\n";
    for(auto u : path) cout << u << " ";
    cout << "\n";
}

int main() {
    naf();
}
