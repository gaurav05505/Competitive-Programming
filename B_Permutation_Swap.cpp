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

        vector<int>p(n); 

        for(auto &x : p){
            cin>>x; 
        }

        int k=0; 

        for(int i=0; i<n; i++){
            if(p[i] != i+1 ){
                int dist = abs((p[i] - i)-1); 
                k = __gcd(k , dist); 
            }
        }

        cout<<k<<'\n'; 


    }


    return 0; 
}