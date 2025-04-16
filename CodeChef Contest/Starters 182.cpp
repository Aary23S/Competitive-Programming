Code Chef Contest Starters 182 rated on: 15 April 2025 

Problem 1:IPL
https://www.codechef.com/problems/INPL

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	ll t;
	cin>>t;
	
	if(t>=7)    cout<<"THALA";
	else cout<<"BOOM";
	
	return 0;

}

//______________________________________________

Problem 2: Bar Queue
https://www.codechef.com/problems/QBGI

MY CODE : Test 1 pass but Test 2 failed
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
	
// 	int tt;
// 	cin>>tt;
// 	while(tt--)
// 	{
// 		int nn;
// 		cin>>nn;
// 		string str;
// 		cin>>str;
// 		int cntB=0,cntG=0,possB=0,idealG=0,AnsB=0;
// 		for(int i=0;i<=nn;i++)
// 		{
// 			if(i==0 && str[i]=='G')
// 			{
// 				cntG++;
// 				possB=(2*cntG);
// 			}
// 			else if(i!=0 && str[i]=='G')
// 			{
// 				cntG++;
// 				possB=(2*cntG);
				
// 			}
// 			else if(i==0 && str[i]=='B')
// 			{
// 				cntB++;
// 				idealG=(cntB/2);
// 				//return cntB;
// 				cout<<cntB<<"\n";
// 				// break;
// 			}
// 			else if(i!=0 && str[i]=='B')
// 			{
// 				cntB++;
// 				AnsB=possB-cntB;
// 				if(AnsB==0 && i==nn){
// 				//	return (cntB+cntG);
// 					cout<<(cntB+cntG)<<"\n";
// 					// break;
// 				}
// 				if(AnsB<0 )	{
// 				//	return (cntB+cntG);
// 					cout<<(cntB+cntG)<<"\n";
// 					break;
// 				} 
			
// 			}
// 		}
// 		if(cntB==cntG && possB>cntB)
// 		{
// 			cout<<nn<<"\n";
			
// 		}
		
// 	}
	
// 	return 0;
// }

CORRECT CODE
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while (tt--) {
        int nn;
        cin >> nn;
        string str;
        cin >> str;

        int cntB = 0, cntG = 0;
        int allowed = 0;

        for (int i = 0; i < nn; i++) {
            if (str[i] == 'B') cntB++;
            else cntG++;

			allowed++;
			
            if (cntB > 2 * cntG) break;
            
        }

        cout << allowed << "\n";
    }

    return 0;
}

//______________________________________________

