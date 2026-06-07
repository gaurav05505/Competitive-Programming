#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main(){

    int n = 8 ; 

    int best_a = 17 % 3; 
    // int best_b = n; 
    // int minn = INT_MAX;

    // for(int i=1; i<n; i++){
    //     int a = i; 
    //     int b = n -a; 

    //     int lcm = (a*b) / __gcd(a,b);
    //     if (lcm < minn) {
    //         minn = lcm;
    //         best_a = a;
    //         best_b = b;
    //     }

         
    // }



    cout<<best_a<<" "<<'\n';



    return 0; 
}