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
        
        vector<int>b(n); 
        for(int &x : b){
            cin>>x; 
        } 

        

        sort(b.begin(), b.end(), greater<int>()); 

        if(n ==2 ){
            cout<<b[0]<<" "<<b[1]<<'\n';
            continue;
        }

        bool check = true; 
        for(int i=1; i<n-1; i++){
            if(b[i-1] % b[i] != b[i+1]){
                check = false; 
                break;
            }
        }   

        if(check){
            cout<<b[0]<<" "<<b[1]<<'\n'; 
        }
        else{
            cout<<-1<<'\n'; 
        }


    }


    return 0; 
}