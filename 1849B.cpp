//https://codeforces.com/problemset/problem/1849/B

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
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,ll>>a(n);
        for(ll i=0;i<n;i++){
            ll b;
            cin>>b;
            a[i].first=b;
            a[i].second=i+1;
        }
        for(ll i=0;i<n;i++){
            a[i].first=a[i].first%k;
            if(a[i].first==0) a[i].first=k;
        }
        sort(a.begin(),a.end(),[&](pair<ll, ll> a, pair<ll, ll> b){
            if(a.first==b.first) return a.second<b.second;
            return a.first>b.first;
        });
        for(auto it:a){
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
}