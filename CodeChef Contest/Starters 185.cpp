//conducted on 7/5/25

//https://www.codechef.com/problems/PZSPLIT
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
	if(n%2==0)
	cout<<"1"<<"\n";
	else
	cout<<"2";
	return 0;
}


//https://www.codechef.com/problems/RBLT
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll>v(n);
		// unordered_map<ll,ll>mp;
		ll cntR=0,cntB=0,cntNo=0;
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
			if(v[i]==1)
			cntR++;
			else if(v[i]==2)
			cntB++;
			else 
			cntNo++;
		}
		if (n % 2 != 0) {
            cout << "No\n";
            continue;
        }
 
		if(cntNo==0)
		{
			if(cntR==cntB)
			cout<<"Yes"<<"\n";
			else cout<<"No"<<"\n";
			continue;
		}
		
		
		
		ll diff=abs(cntR-cntB);
		if(diff>cntNo)
		cout<<"No"<<"\n";
		else
		{
			if((cntNo-diff)%2==0)
			cout<<"Yes"<<"\n";
			else 
			cout<<"No"<<"\n";
		}
	}
	return 0;
}


//https://www.codechef.com/problems/CREAHUN
//can not solve and wrong answer
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, h;
        cin >> n >> h;

        ll a = 0, b = 0;
        for (int i = 0; i < n; ++i) {
            int y, x;
            cin >> y >> x;
            if (y == 1) a = max(a, (ll)x);
            else b = max(b, (ll)x);
        }

        ll res = LLONG_MAX;

        if (a > 0) {
            res = min(res, (h + a - 1) / a);
        }

        if (b > 0) {
            res = min(res, 2 * ((h + b - 1) / b));
        }

        if (a > 0 && b > 0) {
            for (int k = 0; k <= 2; ++k) {
                ll damage = k * a;
                ll time = k ;

                ll remaining = h - damage;
                if (remaining > 0) {
                    int value = (remaining + b - 1) / b;
                    value = 2* value;
                    time+=value;
                }

                res = min(res, time);
            }
        }

        cout << res << "\n";
    }

    return 0;
}
