#include<bits/stdc++.h>
using namespace std;

#define ll long long

// D. Friends and the Restaurant

void solve() {
    int n;
    cin >> n;
    vector<ll> x(n), y(n);
    for(auto &i : x) cin >> i;
    for(auto &i : y) cin >> i;

    vector<pair<int, int>> diff(n);
    for(int i = 0; i < n; i++) {
        diff[i].first = y[i] - x[i];
        diff[i].second = i;
    }
    sort(diff.begin(), diff.end());
    reverse(diff.begin(), diff.end());

    int j = n - 1, cnt = 0;
    for(int i = 0; i < n; i++) {
        while(j > i and diff[i].first + diff[j].first < 0) 
            j--;
        if(j <= i) break;
        cnt++; j--;
    }
    cout << cnt << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
