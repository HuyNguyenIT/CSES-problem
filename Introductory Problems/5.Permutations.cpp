#include<bits/stdc++.h>

using namespace std;

#define int long long

int const N = 1e5 + 111;

void solve(){
    int n; cin >> n;
    if(n == 1){
        cout << 1 << '\n';
        return;
    }
    if(n <= 3 && n > 1){
        cout << "NO SOLUTION";
        return;
    } else {
        int x = 2;
        while(x <= n){
            cout << x << ' ';
            x += 2;
        }
        x = 1;
        while(x <= n){
            cout << x << ' ';
            x += 2;
        }

    }
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