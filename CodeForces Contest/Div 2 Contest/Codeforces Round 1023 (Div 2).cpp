//contest conducted on 5/5/25
//problem A :https://codeforces.com/contest/2107/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int overall_gcd;
ll Maxno;
int main() {
    ll tt;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        bool ans = false;
        vector<ll> a(n);
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (*max_element(a.begin(), a.end()) == *min_element(a.begin(), a.end())) {
            ans = false;
        }
        else {
            auto maxIt = max_element(a.begin(), a.end());
            ll maxIndex = distance(a.begin(), maxIt);
            Maxno = *maxIt;
            

            vector<ll> b = a;
            b.erase(b.begin() + maxIndex);
            
             overall_gcd = accumulate(b.begin(), b.end(), b[0], 
                [](int a, int b) { return __gcd(a, b); });
             if (overall_gcd < Maxno) {
                
                ans = true;
            }
            else {
                ans = false;
            }
        }
        
        if (ans) {
        	cout<<"Yes"<<"\n";
           for (ll i = 0; i < n; i++) {
                    if (a[i] != Maxno) {
                        cout << "1 ";
                    }
                    else {
                        cout << "2 ";
                    }
                }
                
        }
        else
        {
        	cout<<"\nNo"<<"\n";
        }
    }
    return 0;
}
