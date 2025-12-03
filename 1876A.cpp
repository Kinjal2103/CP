//https://codeforces.com/problemset/problem/1876/A

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
        ll n,p;
        cin>>n>>p;
        vector<ll> a(n),b(n);
        vector<vector<ll>>m;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
            m.push_back({b[i],a[i]});
        }
        sort(m.begin(), m.end(), [](const vector<ll> &x, const vector<ll> &y){
            if(x[0] == y[0]) 
                return x[1] > y[1];   // if b same → sort by a
            return x[0] < y[0];       // otherwise sort by b
        });
        long long ans=p;
        ll i=0;
        ll visited=1;
        while(visited<n){
            if(m[i][0]>p) {
                ans+=p;
                visited++;
                i++;
            }
            else{
                ans+=m[i][0]*min(m[i][1],n-visited);
                visited+=min(m[i][1],n-visited);
                i++;
            }
        }
        cout<<ans<<endl;

    }
}
