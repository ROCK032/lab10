#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj(5);
vector<bool> visited(5, false);

void dfs(int v) {
    visited[v] = true;
    cout << v << " ";

    for (int nei : adj[v]) {
        if (!visited[nei]) dfs(nei);
    }
}

int main() {
    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    adj[3].push_back(4);
    adj[4].push_back(3);

    dfs(1);
}
