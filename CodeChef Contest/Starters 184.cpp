//conducted on 30/4/25
//https://www.codechef.com/problems/MULT3

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n%3==0) cout << n <<endl;
	else if((n+1)%3==0) cout<<n+1<<endl;
	else cout<<n-1<<endl;
    
return 0;
}
