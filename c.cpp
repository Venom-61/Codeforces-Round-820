#include<bits/stdc++.h>
using namespace std;

#define ll long long

// C. Jumping on Tiles

void solve() {
    string s;
    cin >> s;
    int n = (int)s.size();

    map<char, vector<int>> let_to_ind;
    for(int i = 0; i < n; i++) {
        let_to_ind[s[i]].push_back(i);
    }

    int direction = (s[0] < s[n - 1]) ? 1 : -1;

    vector<int> ans;
    for(char c = s[0]; c != s[n - 1] + direction; c += direction) {
        for(auto now : let_to_ind[c]) {
            ans.push_back(now);
        }
    }

    int cost = abs(s[n - 1] - s[0]);
    cout << cost << " " << ans.size() << "\n";

    for(auto now : ans) {
        cout << now + 1 << " "; 
    }
    cout << "\n";
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
