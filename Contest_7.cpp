#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#include <bits/stdc++.h>
using namespace std;

int main() {
    ll n, m, s;
    cin >> n >> m >> s;

    vector<vector<pair<ll, ll>>> g(n + 1);
    for (ll i = 0; i < m; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    vector<ll> maxW(n + 1, 0);
    priority_queue<pair<ll, ll>> pq;

    maxW[s] = LLONG_MAX;
    pq.push({LLONG_MAX, s});

    while (!pq.empty()) {
        auto [curW, u] = pq.top();
        pq.pop();

        if (curW != maxW[u]) continue;

        for (auto [v, w] : g[u]) {
            ll newW = min(curW, w);
            if (newW > maxW[v]) {
                maxW[v] = newW;
                pq.push({newW, v});
            }
        }
    }

    for (ll i = 1; i <= n; i++) {
        if (i == s) cout << -1 << ' ';
        else cout << maxW[i] << ' ';
    }

    return 0;
}
