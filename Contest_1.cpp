#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main() {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i+=1) {
        cin >> arr[i];
    }

    for (ll i = 0; i < 1001; i+=1) {
        vector<ll> parr(2);
        for (ll j = 0; j < 2; j+=1) {
            cin >> parr[j];
        }
        if (parr[0] == 0 && parr[1] == 0) {
            break;
        }

        reverse(arr.begin() + parr[0] - 1, arr.begin() + parr[1]);
    }
    
    for (ll i = 0; i < n - 1; i+=1) {
        cout << arr[i] << " ";
    }
    cout << arr[n - 1] << "\n";

    return 0;
}
