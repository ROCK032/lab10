#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> adj(5); // 4 вершины, индексы 1..4

    adj[1].push_back(2); // A-B
    adj[2].push_back(1);

    adj[2].push_back(3); // B-C
    adj[3].push_back(2);

    adj[2].push_back(4); // B-D
    adj[4].push_back(2);

    // Выведем список смежности
    for (int i = 1; i <= 4; i++) {
        cout << i << ": ";
        for (int neighbor : adj[i]) cout << neighbor << " ";
        cout << endl;
    }
}
