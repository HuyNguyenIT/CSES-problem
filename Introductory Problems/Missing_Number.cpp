#include<bits/stdc++.h>

using namespace std;

#define int long long

int const N = 1e5 + 111;

void solve(){
    int n; cin >> n;
    vector<int> v(n - 1);
    int sum = 0;
    for(auto&x : v) cin >> x, sum += x;
    cout << n * (n + 1) / 2 - sum << '\n';

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