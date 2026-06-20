//https://codeforces.com/problemset/problem/2224/B

#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define pb push_back
#define pob pop_back
#define fori(i, a, b) for (int i = (a); i < (b); i++)
#define forl(i, a, b) for (long long i = (a); i < (b); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vmax(v) *max_element(all(v))
#define vmin(v) *min_element(all(v))
#define MOD (ll)(1e9+7)
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
};
#include <iomanip>
void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vll a(n);
        fori(i,0,n){
            cin>>a[i];
        }
        sort(a.begin(), a.end());

        vector<ll> b;

        // Put maximum first
        b.push_back(a.back());
        a.pop_back();

        // First occurrences
        vector<ll> dup;

        for (int i = 0; i < (int)a.size(); i++) {

            if (i == 0 || a[i] != a[i - 1]) {
                b.push_back(a[i]);
            }
            else {
                dup.push_back(a[i]);
            }
        }

        // Duplicates later
        for (ll x : dup) {
            b.push_back(x);
        }

        ll ans = 0;

        vector<int> freq(n + 2, 0);

        int mex = 0;
        ll mx = 0;

        for (ll x : b) {

            mx = max(mx, x);

            if (x <= n) {
                freq[x]++;
            }

            while (freq[mex]) {
                mex++;
            }

            ans += mex + mx;
        }

        cout << ans << '\n';
    }
}
