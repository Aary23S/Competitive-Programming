//conducted on 23/4/2025
//Max Sixers 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int ballfrsix=x/6;
	if(ballfrsix*6<=x)
	{
		cout<<ballfrsix<<"\n";
	}
	
	
	return 0;
}

//Max Triangle
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;

        if (N < 3) {
            cout << -1 << "\n";
            continue;
        }

       
        int a = N - 2;
        int b = N - 1;
        int c = N;

        if (a + b > c) {
            int perimeter = a + b + c;
            cout << perimeter << "\n";
        } else {
            cout << -1 << "\n"; 
        }
    }

    return 0;
}


//Not Solved butunderstood the logic : Larger Smaller : https://www.codechef.com/problems/LARGSMALL
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int min_val = *min_element(A.begin(), A.end());
        int max_val = *max_element(A.begin(), A.end());

        int result = max(0, max_val - min_val - 1);
        cout << result << "\n";
    }
    return 0;
}

