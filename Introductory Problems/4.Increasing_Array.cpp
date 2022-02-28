#include<bits/stdc++.h>

using namespace std;

#define int long long

int const N = 1e5 + 111;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto&x : v) cin >> x;
    int answer = 0;
    for(int i = 1; i < n; i++) {
        if(v[i] < v[i - 1]){
            answer += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << answer << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();
    // freopen("input.txt", "r", stdin);
    int t = 1; 
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}