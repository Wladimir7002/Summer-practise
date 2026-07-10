#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N, Q;
    cin >> N >> Q;
    
    vector<ll> diff(N + 2, 0);
    
    while (Q--) {
        ll l, r;
        ll v;
        cin >> l >> r >> v;
        diff[l] += v;
        diff[r + 1] -= v;
    }
    
    vector<ll> arr(N + 1, 0);
    ll cur = 0;
    for (ll i = 1; i <= N; i++) {
        cur += diff[i];
        arr[i] = cur;
    }
    
    for (ll i = 1; i <= N; i++) {
        cout << arr[i] << (i == N ? '\n' : ' ');
    }
    
    return 0;
}
