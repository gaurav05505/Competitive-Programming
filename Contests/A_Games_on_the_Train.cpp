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
        ll n; 
        cin>>n; 

        vector<ll>h(n); 
        for(ll &x : h){
            cin>>x; 
        }

        ll minn = *min_element(h.begin() , h.end()); 
        ll maxx = *max_element(h.begin() , h.end()); 

        ll x = abs(maxx - minn) +1; 

        cout<<x<<'\n';
         

    }

    return 0; 
}