Code Chef Contest Starters 181 rated on: 9 April 2025 

Problem 1: Move Grid
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=0,y=0;
    x=a-c;
    y=b-d;
    cout<<x<<" "<<y;
}

//_________________________________________________________

Problem 2: Breaking Sticks
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int tt;
	cin>>tt;
	while(tt--)
	{
		int nn;
		cin>>nn;
		int totbreaks=0;
		vector<int>v(nn);
		for(int i=0;i<nn;i++)
		{
			cin>>v[i];
		}
		
		for(int i=0;i<v.size();i++)
		{
			if(v[i]>1)
			{
				totbreaks+=(v[i]-1);
			}
		}
		cout<<totbreaks<<"\n";
	}


	return 0;
}

//_________________________________________________________

Problem 3: Flip Prefix
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tt;
	cin>>tt;
	while(tt--)
	{
	    int n;
	    cin>>n;
	    
	    string str;
	    cin>>str;
	    
	    int bal1=0;
	    int bal0=0;
	    // set<int>st;
	    // st.insert(0);
	    
	    int cnt=0; 
	    
	    for(char ch:str)
	    {
	        if(ch=='1') bal1++;
	        else if(ch=='0') bal0++;
	        // if(bal==0)	st.insert(bal);
	        if(bal1==bal0)	{
	        	cnt++;
	        	// bal1=0;
	        	// bal0=0;
	        }
	    }
	    // cout<<st.size()<<"\n";
	    cout<<(1<<cnt)<<"\n";
	    // st.clear();
	}
   return 0;
}

//_________________________________________________________
