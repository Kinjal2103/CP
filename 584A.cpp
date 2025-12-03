//https://codeforces.com/problemset/problem/584/A

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
    int n,t;
    cin>>n>>t;
    if (t == 10) {
        if (n == 1) cout << -1 << "\n";
        else {
            cout << 1;
            for (int i = 1; i < n; i++) cout << 0;
            cout << "\n";
        }
    } else {
        cout << t;
        for (int i = 1; i < n; i++) cout << 0;
        cout << "\n";
    }
}