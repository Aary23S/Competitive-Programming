Code Forces Contest Div 4 on: 13 April 2025

A. Trippi Troppi

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ll t;
	cin >> t;
	cin.ignore(); 
	
	while (t--) {
		string str;
		getline(cin, str);  

		vector<string> tokens;
		string token;
		string ansStr="";
		istringstream iss(str);
		while (iss >> token) {
			tokens.push_back(token);
			ansStr+=token[0];
		}

		// for (int i = 0; i < tokens.size(); i++) {
		// 	cout << tokens[i]<<"\n";
		// }
		
		// for(int i=0;i<tokens.size();i++)
		// {
		// 	cout<<token[0]<<"\n";
		// }
		cout<<ansStr<<"\n";
		
	}

	return 0;
}
//_______________________________________________________________

B. Bobritto Bandito

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        
        int len = m + 1;
        int left = max(l, -(len / 2));
        int right = left + len - 1;

        
        if (right > r) {
            right = r;
            left = r - len + 1;
        }

        cout << left << " " << right << "\n";
    }
    return 0;
}
//_______________________________________________________________
