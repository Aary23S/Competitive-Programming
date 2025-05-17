// contest conducted on 17/5/25

//https://codeforces.com/contest/2109/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll ones = 0;
        bool has_adjacent_zeros = false;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) ones++;
            if (i > 0 && a[i] == 0 && a[i - 1] == 0) {
                has_adjacent_zeros = true;
            }
        }

        if (ones > n - 1 || has_adjacent_zeros) {
            cout << "YES\n";  // Someone is definitely lying
        } else {
            cout << "NO\n";   // It's possible no one is lying
        }
    }
    return 0;
}
