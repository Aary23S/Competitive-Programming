//contest conducted on 14/5/25

//https://www.codechef.com/START186D/problems/CHESSWIN
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a,b;
	cin>>a>>b;
	if(b<a)
	{
		cout<<"0"<<"\n";
	}
	else if(b>=a)
	{
		cout<<(b-a+1)<<"\n";
	}
	
	return 0;
} 


//https://www.codechef.com/START186D/problems/BESTMOVIE
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll r, p, n;
		cin >> n;
		vector<pair<ll,ll>> vp;
		
		for(int i = 0; i < n; i++)
		{
			cin >> r >> p;
			if(r >= 7) {
				vp.push_back({r, p});
			}
		}
		
		if(vp.empty()) {
			cout << "-1\n"; 
			continue;
		}

	
		ll minPrice = LLONG_MAX;
		for(auto it : vp) {
			minPrice = min(minPrice, it.second);
		}

		cout << minPrice << "\n";  
	}
	return 0;
}


//https://www.codechef.com/START186D/problems/APPROVAL
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        vector<int> ratings(5);
        int sum = 0;

        for (int i = 0; i < 5; ++i) {
            cin >> ratings[i];
            sum += ratings[i];
        }

        if (sum >= 35) {
            cout << 0 << endl;
            continue;
        }

        sort(ratings.begin(), ratings.end());  
        int bribes = 0;

        for (int i = 0; i < 5 && sum < 35; ++i) {
            sum += (10 - ratings[i]);
            bribes++;
        }

        cout << bribes * 100 << endl;
    }

    return 0;
}
