#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj(6);
vector<bool> visited(6, false);
vector<int> topo;  // сюда будем добавлять вершины

void dfs(int v) {
    visited[v] = true;
    for (int nei : adj[v]) {
        if (!visited[nei]) dfs(nei);
    }
    topo.push_back(v); // добавляем ПОСЛЕ обработки соседей
}

int main() {
    adj[5].push_back(0);
    adj[5].push_back(2);

    adj[4].push_back(0);
    adj[4].push_back(1);

    adj[2].push_back(3);
    adj[3].push_back(1);

    // запускаем dfs из всех вершин
    for (int i = 0; i < 6; i++) {
        if (!visited[i]) dfs(i);
    }

    // topo сейчас в обратном порядке → переворачиваем
    reverse(topo.begin(), topo.end());

    // выводим топологический порядок
    for (int x : topo) cout << x << " ";
}
