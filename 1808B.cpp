//https://codeforces.com/problemset/problem/1808/B

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
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
};
ll lcm(ll a ,ll b){
    return (a*b)/gcd(a,b);
}
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

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<long long>> v(m, vector<long long>(n));

        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m; i++) {
                cin >> v[i][j];
            }
        }

        for (int i = 0; i < m; i++) {
            sort(v[i].begin(), v[i].end());
        }

        long long ans = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans -= v[i][j] * (n - j - 1);
                ans += v[i][j] * j;
            }
        }

        cout << ans << "\n";
    }
}
