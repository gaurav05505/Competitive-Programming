#include <bits/stdc++.h>
using namespace std;

int check(int a, int b) {
    int opr = 0;

    while (a > 0) {
        a /= b;
        opr++;
    }

    return opr;
}

int main() {
    int a = 1337;
    int b = 1;

    int ans = INT_MAX;



    
    for (int i = 0; i < 35; i++) {
        int nb = b + i;

        if (nb == 1) continue;

        ans = min(ans, i + check(a, nb));
    }

    cout << ans << '\n';

    return 0;
}