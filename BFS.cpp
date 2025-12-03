#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> adj(5);

    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    adj[3].push_back(4);
    adj[4].push_back(3);

    vector<bool> visited(5, false);
    queue<int> q;

    int start = 1;

    visited[start] = true;  
    q.push(start);

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";

        for (int nei : adj[v]) {
            if (!visited[nei]) {
                visited[nei] = true;
                q.push(nei);
            }
        }
    }
}
