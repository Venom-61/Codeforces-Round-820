#include<bits/stdc++.h>
using namespace std;

#define ll long long

// B. Decode String

void solve() {
    int n;
    string s, fin;
    cin >> n >> s;
    for (int  i = n-1 ; i >= 0 ; i-- ) {
        if(s[i] == '0' ) {
            int a = s[i-1] - '0';
            int b = s[i-2] - '0';
            char c = b*10 + a + 96;
            fin.push_back(c);
            i -= 2;
        } else {
            int a = s[i] - '0';
            char c = a + 96;
            fin.push_back(c);
        }
    }

    string nif;
    for (int i = fin.size() - 1 ; i >= 0 ; i-- ) {
        nif.push_back(fin[i]);
    }
    cout << nif << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        solve();
    }
    return 0;
}
