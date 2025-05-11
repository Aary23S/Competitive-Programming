//contest conducted on the 11/05/2025

//https://codeforces.com/contest/2102/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,p,q;
		cin>>n>>m>>p>>q;
		bool ans=false;
		ll x=n/p;
		ll y=n%p;
		if(y==0)
		{
			if(x*q==m)	
			{
				//cout<<"Yes"<<"\n";
				ans=true;
			}
			else
			{
				//cout<<"No"<<"\n";
				ans=false;
			}
		}
		else if(y!=0)
		{
			ll sum=m-x*q;
			//cout<<"Yes"<<"\n";
			
			ans=true;
		
		}
		if(ans)	cout<<"Yes"<<"\n";
		else cout<<"No"<<"\n";
	}
	
	return 0;
}
