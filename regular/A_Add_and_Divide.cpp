#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

ll check(ll a , ll b){
    ll opr = 0; 

    while(a > 0){
        a /=b; 
        opr++; 
    }

    return opr; 
}


int main(){

    int t; 
    cin>>t; 

    while(t--){
        ll a , b;
        cin>>a>>b; 
        
        ll ans =  LLONG_MAX; 

        for(int i=0; i<34; i++){
            ll newB = b+i; 

            if(newB == 1 ){
                continue;
            }

            ans = min(ans , i+ check(a , newB)); 

        }

        cout<<ans<<'\n'; 

    }

    return 0; 
}