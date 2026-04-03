#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<ll> a(n);

        for(int i=0;i<n;i++) cin >> a[i];

        // ignore b
        for(int i=0;i<n;i++){
            int x; cin >> x;
        }

        // all same → 0
        bool same = true;
        for(int i=1;i<n;i++){
            if(a[i] != a[0]) same = false;
        }
        if(same){
            cout << 0 << "\n";
            continue;
        }

        int ans = 0;

        for(int i=0;i<n;i++){
            if(i == 0){
                if(__gcd(a[0], a[1]) != a[0]) ans++;
            }
            else if(i == n-1){
                if(__gcd(a[n-2], a[n-1]) != a[n-1]) ans++;
            }
            else{
                ll g1 = __gcd(a[i-1], a[i]);
                ll g2 = __gcd(a[i], a[i+1]);

                if(g1 == g2) ans++;
            }
        }

        cout << ans << "\n";
    }
}