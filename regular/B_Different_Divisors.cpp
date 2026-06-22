#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

bool isPrime(int val){
    if(val < 2){
        return false; 
    }

    for(int i=2; i*i <= val; i++){
        if(val%i == 0){
            return false; 
        }
    }

    return true; 
}


int main(){

    int t; 
    cin>>t; 

    while(t--){
        int d; 
        cin>>d; 
        
        ll fp = 1 + d;
        while(!isPrime(fp)){
            fp++; 
        }
        
        ll np = fp+d; 
        while(!isPrime(np)){
            np++; 
        }

        ll ans = fp*np; 

        cout<<ans<<'\n'; 

    }

    return 0; 
}