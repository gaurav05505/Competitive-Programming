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
        int n , k ;
        cin>>n>>k; 

        vector<int>a(n);
        for(auto &x : a ){
            cin>>x; 
        } 

        sort(a.begin() , a.end()); 
        
        int cur = 1; 
        int maxx = 1; 

        for(int i=1; i<n; i++){
            if(abs(a[i] - a[i-1]) <= k ){
                cur++; 
            }
            else{
                cur = 1; 
            }

            maxx = max(maxx , cur ); 
        }

        int count = n- maxx ; 
        cout<<count<<'\n'; 




    }


    return 0; 
}