#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main(){

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        vector<pair<ll,int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({a[i], i + 1});
        }

        sort(v.rbegin(), v.rend());

        vector<ll> x(n + 1);
        x[0] = 0;   // headquarters

        ll pos = 1;

        for (int i = 0; i < n; i++) {
            int id = v[i].second;

            if (i % 2 == 0) {
                x[id] = pos;
            } else {
                x[id] = -pos;
                pos++;
            }
        }

        ll cost = 0;
        for (int i = 0; i < n; i++) {
            ll ai = v[i].first;
            int id = v[i].second;

            cost += 2LL * llabs(x[id] - x[0]) * ai;
        }

        cout << cost << "\n";
        for (int i = 0; i <= n; i++) {
            cout << x[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}