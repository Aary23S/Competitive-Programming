//conducted on Apr/21/2025

//Problem A:Common Multiple
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_set<int> s;
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            s.insert(x);
        }
        
        cout << s.size() << "\n";
    }
 
    return 0;
}
