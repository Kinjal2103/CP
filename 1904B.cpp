//https://codeforces.com/problemset/problem/1904/B

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
        ll n;
        cin>>n;
        ll a;
        vector<pair<ll,ll>> v;
        for (int i = 0; i < n; i++) { 
			cin >> a;
			v.push_back({a, i});
		}
        vector<ll> pre(n); 
		sort(v.begin(), v.end());
        pre[0] = v[0].first;
		for (int i = 1; i < n; i++) { 
			pre[i] = pre[i - 1] + v[i].first;
		}

		vector<ll> ans(n);
        for (int i = 0; i < n; i++) {
			int j = i;
			int found = i;
			while (j < n) {
				pair<ll, ll> temp = {pre[j] + 1, INT_MIN};
				ll idx = lower_bound(v.begin(), v.end(), temp) - v.begin();
				idx--;
				if (idx == j) {
					break;
				}
				found += idx - j;
				j = idx;
			}
			ans[v[i].second] = found;
		}

        for (int i = 0; i < n; i++) { 
			cout << ans[i] << " ";
		}
		cout << endl;
    }
}