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

        vector<char>s(n); 

        for(auto &x : s ){
            cin>>x; 
        }

        int curr =1; 
        int longest_subS = 1; 


        for(int i=1; i<n; i++){
            if(s[i] == s[i-1]){
                curr++; 
            }
            else{
                curr = 1; 
            }

            longest_subS = max(longest_subS , curr); 
        }

        cout<<longest_subS+1<<'\n'; 

    

    }

    return 0; 
}