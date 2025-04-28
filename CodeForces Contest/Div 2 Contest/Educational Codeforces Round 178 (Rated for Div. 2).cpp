//contest conducted on 28/4/25

//https://codeforces.com/contest/2104/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;

        ll sum = a + b + c;

        if (sum % 3 != 0) {
            cout << "NO" << endl;
            continue;
        }

        ll x = sum / 3;

        if (x >= a && x >= b && x <= c && (c - x) >= 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
