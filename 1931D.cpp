//https://codeforces.com/problemset/problem/1931/D

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
        int n,x,y;
        cin>>n>>x>>y;

        vi a(n);
        map<int,vi> m;
        fori(i,0,n){
            cin>>a[i];
            m[a[i]%y].push_back(a[i]);
        }
        ll ans=0;
        for (auto &p : m) {
            vector<int> &v = p.second;
            map<int, ll> mp1;

            for (int val : v) mp1[val % x]++;

            for (auto &q : mp1) {
                int r = q.first;
                ll cnt = q.second;

                if (r == 0 || (x % 2 == 0 && r == x / 2)) {
                    ans += cnt * (cnt - 1) / 2;
                } else if (mp1.count(x - r)) {
                    ans += cnt * mp1[x - r];
                    mp1[x - r] = 0;
                }
            }
        }
        cout << ans << "\n";

    }  
}
