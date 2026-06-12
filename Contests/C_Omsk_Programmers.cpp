#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main(){ 

    int t; 
    cin >> t; 

    while(t--){
        ll a, b, x; 
        cin >> a >> b >> x;   

        vector<pair<ll, int>> Fa, Fb; 

        ll checka = a; 
        ll counta = 0; 

        while(true){
            Fa.push_back({checka, counta}); 
            if(checka == 0) break; 
            checka /= x; 
            counta++; 
        }

        ll checkb = b; 
        ll countb = 0; 
        while(true){
            Fb.push_back({checkb, countb}); 
            if(checkb == 0) break; 
            checkb /= x; 
        }

        ll ans = LLONG_MAX; 

        for(auto &A : Fa){
            for(auto &B : Fb){

                ll va = A.first;
                ll vb = B.first;
                ll ca = A.second;
                ll cb = B.second;
                ll target = max(va, vb);

                ll cost = ca + cb + (target - va) + (target - vb);

                ans = min(ans, cost);
            }
        }

        cout << ans << '\n'; 
    }

    return 0; 
}