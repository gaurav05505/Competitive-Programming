#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main(){

    // user input 
    int t; 
    cin>>t; 

    while(t--){
        ll a , b , n ; 
        cin>>a>>b>>n; 

        vector<ll>tools(n);
        for(int i=0; i<n; i++){
            cin>>tools[i]; 
        } 
        
        ll sum =0;
        for(int i=0; i<n; i++){
            sum += min(tools[i] , a-1); 
        } 

        ll totalTime = sum + b; 

        cout<<totalTime<<'\n'; 
        
    }

    return 0; 
}