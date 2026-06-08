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
        ll w , h; 
        cin>>w>>h; 
        ll ar = INT_MIN; 
        for(int i=0; i<4; i++){
            ll k; 
            cin>>k; 
            
            ll first , last; 
            for(int j=0; j<k; j++){
                ll x; 
                cin>>x; 
                if(j ==  0){
                    first = x; 
                }
                if( j == k-1){
                    last = x; 
                }
            }

            ll base = last - first; 
            ll height; 
            if(i<= 1){
                height = h; 
            }
            else{
                height = w; 
            }

            ar = max(ar , base*height); 

        }

        cout<<ar<<'\n'; 
    }


}