#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main(){

    int t; 
    cin>>t; 

    while(t--){
        int n; 
        cin>>n; 

        vector<ll>h(n); 
        for(ll &x : h){
            cin>>x; 
        }

        for(int i=0; i<n; i++){
            vector<ll>v(n , 0); 
            v[i] = 0; 
            ll curr = 0; 

            for(int j= 1 ; j<n; j++){
                int idx = (i + j ) % n; 
                int pidx = (i + j -1)% n; 
                ll p = h[pidx]; 

                if(curr > p){
                    v[idx] = curr; 
                }
                else{
                    v[idx] = p; 
                    curr = p ; 
                }

                if(j == n -1 ){
                    ll lpip = h[(i + n-1) % n];
                    ll cl = min(v[idx] , lpip); 
                    
                    for(int m= n-1; m>=1; m--){
                        int midx = (i+m)% n; 
                        int bpip = h[(i+m-1) % n]; 
                        if(cl <= bpip){
                            break; 
                        }
                        v[midx] = cl; 

                    }
                    v[idx] = cl; 
                }
            }

            ll ans = 0; 
            for(int k=0; k<n; k++){
                ans += v[k]; 
            }
            cout<<ans;
            if(i < n-1){
                cout<<" "; 
            } 

        }
        cout<<'\n'; 
    }

    return 0; 
}