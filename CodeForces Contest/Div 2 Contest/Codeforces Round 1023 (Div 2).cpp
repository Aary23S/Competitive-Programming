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


//problem B:https://codeforces.com/contest/2107/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        unordered_map<int, int> freq;
        ll sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
            sum += a[i];
        }

        int max_a = *max_element(a.begin(), a.end());
        int min_a = *min_element(a.begin(), a.end());

        if (max_a - min_a > k + 1) {
            cout << "Jerry\n";
        }
        else if (max_a - min_a == k + 1) {
            if (freq[max_a] == 1) {
                cout << ((sum % 2 == 1) ? "Tom\n" : "Jerry\n");
            } else {
                cout << "Jerry\n";
            }
        }
        else {
            cout << ((sum % 2 == 1) ? "Tom\n" : "Jerry\n");
        }
    }

    return 0;
}
