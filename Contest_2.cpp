#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;

    vector<ll> c(N);
    for (ll i = 0; i < N; ++i) {
        cin >> c[i];
    }

    sort(c.begin(), c.end());

    bool fl = true;
    for (ll i = 1; i < N; ++i) {
        if (c[i] != c[i - 1] + 1) {
            fl = false;
            break;
        }
    }

    cout << (fl ? "Deck looks good" : "Scammed") << '\n';

    return 0;
