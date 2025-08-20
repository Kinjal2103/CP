//https://codeforces.com/problemset/problem/1807/D

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
#define vmax(v) *max_element(all(v))
#define vmin(v) *min_element(all(v))

void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        vector<long long> prefix(n+1, 0);
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i-1] + a[i-1];
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            long long ts = sum - (prefix[r] - prefix[l-1]) + 1LL*(r-l+1)*k;
            if (ts % 2) yes;
            else no;
        }
    }
}
