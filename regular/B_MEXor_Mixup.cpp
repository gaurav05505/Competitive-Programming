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
        ll mex , xr;
        cin>>mex>>xr; 
        
        ll n = mex - 1; 
        ll pref; 

        if(n % 4 == 0){
            pref = n; 
        }
        else if(n% 4 == 1){
            pref = 1; 
        }
        else if(n % 4 == 2 ){
            pref = n +1; 
        }
        else{
            pref = 0; 
        }


        ll need = pref ^ xr; 

        if(need == 0){
            cout<<mex<<'\n'; 
        }
        else if(need != mex){
            cout<<mex+1<<'\n'; 
        }
        else{
            cout<<mex +2<<'\n';  
        }
        


    }

    return 0; 
}