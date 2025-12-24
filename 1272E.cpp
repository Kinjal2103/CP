//https://codeforces.com/problemset/problem/1272/E

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
int n;
vector<int> a;
vector<int> ans;
vector<vector<int>> g;

void bfs(const vector<int>& start, const vector<int>& end) {
    vector<int> d(n, INT_MAX);
    queue<int> q;

    for (int v : start) {
        d[v] = 0;
        q.push(v);
    }

    while (!q.empty()) {
        int v = q.front(); q.pop();
        for (int to : g[v]) {
            if (d[to] == INT_MAX) {
                d[to] = d[v] + 1;
                q.push(to);
            }
        }
    }

    for (int v : end) {
        if (d[v] != INT_MAX)
            ans[v] = d[v];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    a.resize(n);
    fori(i,0,n) cin >> a[i];

    g.assign(n, vector<int>());
    ans.assign(n, -1);

    vector<int> even, odd;

    fori(i,0,n) {
        if (a[i] & 1) odd.push_back(i);
        else even.push_back(i);

        int lf = i - a[i];
        int rg = i + a[i];

        if (lf >= 0) g[lf].push_back(i);
        if (rg < n) g[rg].push_back(i);
    }

    bfs(odd, even);
    bfs(even, odd);

    fori(i,0,n) cout << ans[i] << " ";
    cout << "\n";
}
