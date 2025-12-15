//https://codeforces.com/problemset/problem/1613/C

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
		ll h;
		cin >> n >> h;
		vector<ll> a(n);
		for (ll &x : a) cin >> x;
		ll l = 1, r = 1e18;
		while (l <= r) {
			ll m = (l + r) / 2;
			ll sum = m;
			for (int i = 0; i < n - 1; ++i) 
				sum += min(m, a[i + 1] - a[i]);
			if (sum < h) l = m + 1;
			else r = m - 1;
		}
		cout << r + 1 << '\n';
    }
}