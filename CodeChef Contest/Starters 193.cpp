//Code Chef contest conducted on 2/07/2025

//Problem A: Rectangle and Square Area 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    
    int l,b,s;
    cin>>l>>b>>s;
    int a1=l*b;
    int a2=s*s;
    if(a1==a2)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";

}


//Problem B: Count Odd Even Divisors
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int n;
		cin>>n;
		int evenD=0,oddD=0;
		for(int i=1;i<=n;i++)
		{
			if(i%2==0 && n%i==0) evenD++;
			else if(i%2==1 && n%i==0) oddD++;
		}
		cout<<oddD<<" "<<evenD<<"\n";
	}
	
	return 0;
}


//Problem C: Check Odd Even Divisors
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        bool possible = false;
        if (B == 0) {
            if (A >= 1) {
                possible = true;
            }
        } else {
            if (A >= 1 && B % A == 0) {
                possible = true;
            }
        }
        if (A == 0 && B == 0) {
            possible = false;
        }
        if (A == 0 && B != 0) {
            possible = false;
        }
        cout << (possible ? "Yes" : "No") << endl;
    }

    return 0;
}
