#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

ll lcm(ll a , ll b){
    return (a / __gcd(a,b))*b; 
}


int main(){

    int t; 
    cin>>t; 

    while(t--){
        ll n; 
        cin>>n; 

        ll cur = 1; 
        ll count = 0;
        
        for(int i=1 ; ; i++){
            cur = lcm(cur , i ); 

            if(n % cur == 0){
                count++; 
            }
            else{
                break; 
            }

        }

        cout<<count<<'\n'; 


    }



    return 0; 
}