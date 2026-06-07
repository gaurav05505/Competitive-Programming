#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main(){

    fastio;

    int t; 
    cin>>t; 

    while(t--){
        int n , q ; 
        cin>>n>>q; 

        vector<int>a(n); 
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
         
        int old = 0; 
        for(int i=0; i<n; i++){
            old += a[i]; 
        }

        vector<ll>prefix(n+1 , 0 ); 
        for(int i=1; i<=n; i++){
            prefix[i] = prefix[i-1] + a[i-1]; 
        }

        while(q--){
            int l , r , k; 
            cin>>l>>r>>k;

            long long sum_to_remove = prefix[r] - prefix[l - 1];
            long long sum_to_add = (r - l + 1) * k;
            long long total_sum = old - sum_to_remove + sum_to_add;

            if (total_sum % 2 == 1)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;

        }

    }

    return 0; 
}