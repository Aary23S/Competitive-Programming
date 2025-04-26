//Codeforces contest conducted on 24/4/25

//https://codeforces.com/contest/2106/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		int totOne=0,totCnt=0;
		char target='1';
		totOne=count(str.begin(),str.end(),target);
		for(int i=0;i<n;i++)
		{
			if(str[i]=='1')
			{
				totCnt=totCnt+(totOne-1);
			}
			else if(str[i]=='0')
			{
				totCnt=totCnt+(totOne+1);
			}
			
		}
		cout<<totCnt<<"\n";
	}
	
	return 0;
}
