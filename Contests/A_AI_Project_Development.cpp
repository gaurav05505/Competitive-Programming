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
        int n , x , y , z; 
        cin>>n>>x>>y>>z; 

        ll t1 ; 
        ll t2 = (n+(x+y) - 1)/ (x+y); 
        ll lds = x * z; 
        if(lds >= n){
            t1 = (n+x-1)/x ;
        }
        else{
            ll rem = n - lds; 
            ll comb = x + 10 *y; 
            t1 = z + (rem + comb-1)/ comb; 
        }

        cout<<min(t1 , t2)<<'\n'; 


    }


    return 0;
}