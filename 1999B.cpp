//https://codeforces.com/problemset/problem/1999/B
//Rating 1000

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
#include <iomanip>
void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int f(int a, int b) {
    if (a > b) return 1;
    if (a == b) return 0;
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = 0;

        if (f(a, c) + f(b, d) > 0) ans++;
        if (f(a, d) + f(b, c) > 0) ans++;
        if (f(b, c) + f(a, d) > 0) ans++;
        if (f(b, d) + f(a, c) > 0) ans++;

        cout << ans << '\n';
    }

    return 0;
}