//https://codeforces.com/problemset/problem/1891/B

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
        ll n,q;
        cin>>n>>q;
        vll a(n),x(q);
        fori(i,0,n) cin>>a[i];
        fori(i,0,q) cin>>x[i];
        ll prev=31;
        fori(i,0,q){
            if(x[i]>=prev) continue;
            ll v=pow(2,x[i]);
            fori(j,0,n){
                if(a[j]%v==0){
                    a[j]+=(v/2);
                }
            }
            prev=x[i];
        }
        fori(i,0,n){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}