#include<bits/stdc++.h>

using namespace std;

#define int long long

int const N = 1e5 + 111;

void solve(){
    int n; cin >> n;
    while(n != 1){
        cout << n << ' ';
        if((n&1)){
            n = n * 3 + 1;
        } else n /= 2;
    }
    cout << 1 << '\n';
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
}