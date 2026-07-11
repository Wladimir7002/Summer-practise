#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;

    ll lcm = 1;
    for (ll i = 0; i < N; ++i) {
        ll t;
        cin >> t;
        ll g = gcd(lcm, t);
        lcm = lcm / g * t;
    }

    cout << lcm << endl;
    return 0;
}
