#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A. Two Elevators

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int x = a - 1;
    int y = abs(b - c) + c - 1;

    if(x < y) {
        cout << 1 << "\n";
    } else if (x > y) {
        cout << 2 << "\n";
    } else {
        cout << 3 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
