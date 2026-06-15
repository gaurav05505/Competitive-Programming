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
        string a; 
        cin>>a; 
        string b; 
        cin>>b; 

        int n = a.size(); 
        int m = b.size(); 
        
        set<string>allstr; 

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++ ){
                allstr.insert(a.substr(i , j-i+1)); 
            }
        }

        int minn = INT_MAX; 

        for(int i=0; i<m; i++){
            for(int j=i; j<m; j++){
                if(allstr.count(b.substr(i, j-i+1))> 0){
                    minn = min(minn , n-(j-i+1)+m-(j-i+1)); 
                }
            }
        }

        if(minn == INT_MAX){
            cout<<n+m<<'\n'; 
        }
        else{
            cout<<minn<<'\n'; 
        }

    }


    return 0;
}