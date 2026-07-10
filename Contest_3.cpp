#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    
    for (ll i = n; i >= 1; --i) {
        cout << i << (i > 1 ? ' ' : '\n');
    }
    
    return 0;
}
