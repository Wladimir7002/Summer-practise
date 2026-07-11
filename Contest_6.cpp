#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll n, m, k;
    if (!(cin >> n >> m >> k)) return 0;

    vector<vector<ll>> graph(n + 1);

    for (ll i = 0; i < m; ++i) {
        ll u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<ll> dist(n + 1, -1);

    queue<ll> q;

    dist[k] = 0;
    q.push(k);

    while (!q.empty()) {
        ll v = q.front();
        q.pop();

        for (ll to : graph[v]) {
            if (dist[to] == -1) {
                dist[to] = dist[v] + 1;
                q.push(to);
            }
        }
    }

    for (ll i = 1; i <= n; ++i) {
        cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}
