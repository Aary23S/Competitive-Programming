//CodeForces contest conducted 26/4/25 

//https://codeforces.com/contest/2098/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		
		vector<ll>temp(10,0);
		for(ll i=0;i<str.length();i++)
		{
			temp[str[i]-'0']++;
		}
		string ans="";
		for(ll i=1;i<=str.length();i++)
		{
			ll minV=10-i;
		
			for(int j=minV;j<=9;j++)
			{
				if(temp[minV]>0)
				{
					ans+=(j+'0');
					temp[j]--;
					break;
				}
				else minV++;
			}
		}
		cout<<ans<<"\n";
	}	
	
return 0;
}
