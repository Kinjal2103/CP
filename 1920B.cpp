//https://codeforces.com/problemset/problem/1920/B

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
        int n,k,x;
        cin>>n>>k>>x;
        int A[n + 1] = {};
        for (int i = 1; i <= n; i++)
            cin >> A[i];

        sort(A + 1, A + n + 1, greater<int>());

        for (int i = 1; i <= n; i++)
            A[i] += A[i - 1];

        int ans = -1e9;
        for (int i = 0; i <= k; i++)
            ans = max(ans, A[n] - 2 * A[min(i + x, n)] + A[i]);

        cout << ans << "\n";
    }
}