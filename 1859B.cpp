//https://codeforces.com/problemset/problem/1859/B

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
        int n;
        cin>>n;
        vector<vector<ll>>a(n);
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            a[i].resize(m);
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
            sort(all(a[i]));
        }
        sort(all(a));
        ll ans=a[0][0];
        ll m=a[0][1];
        for(int i=0;i<n;i++){
            ans+=a[i][1];
            m=min(m,a[i][1]);
        }
        cout<<ans-m<<endl;
    }
}