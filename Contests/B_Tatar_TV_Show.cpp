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
        ll n , k;
        cin>>n>>k; 
        
        string s; 
        cin>>s; 

        vector<int>check(k , 0);
        bool oE = true; 
        
        for(int i=0; i<n; i++){
            if(s[i] == '1' ){
                check[i%k]++; 
            }
        }

        for(int i=0; i<k; i++){
            if(check[i] % 2 != 0 ){
                oE = false; 
                break; 
            }
        }

        if(oE){
            cout<<"YES"<<'\n'; 
        }
        else{
            cout<<"NO"<<'\n'; 
        }

    }


    return 0; 
}