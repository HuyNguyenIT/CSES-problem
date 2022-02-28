#include<bits/stdc++.h>

using namespace std;

#define int long long

int const N = 1e5 + 111;

void solve(){
    string s; cin >> s;
    vector<int> cnt(200, 0);
    int answer = 1;
    int n = s.size();
    int last = 0;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1]) answer = max(answer, i - last + 1);
        else last = i;
    }
    cout << answer << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    // freopen("input.txt", "r", stdin);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}