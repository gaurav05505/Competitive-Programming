#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);


int main() {

    int t;
    cin >> t;

    while (t--) {

        ll n;
        cin >> n;

        if (n == 10) {
            cout << -1 << '\n';
            continue;
        }

        ll round = n % 12;
        ll a;

        if (round <= 9) {
            a = round;
        }
        else if (round == 10) {
            a = 22;
        }
        else {
            a = 11;
        }

        ll b = n - a;

        cout << a << " " << b << '\n';
    }

    return 0;
}