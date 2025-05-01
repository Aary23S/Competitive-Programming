//contest conducted on 1/5/25

//https://codeforces.com/contest/2108/problem/A
// //1. The maximum sum can be calculated as:
// If n is even: n² / 2
// If n is odd: (n² - 1) / 2
// 2.  floor(n² / 2)
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (n * n) / 4 + 1 << endl;
    }
    return 0;
}

