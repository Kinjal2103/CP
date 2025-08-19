//https://codeforces.com/contest/2131/problem/C
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

int main() {
    fast_io();
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vll s(n);
        vll t(n);
        forl(i,0,n){
            cin>>s[i];
        }
        forl(i,0,n){
            cin>>t[i];
        }
        vll a,b;
        forl(i,0,n){
            ll x=s[i]%k;
            a.pb(min(x,k-x));
            x=t[i]%k;
            b.pb(min(x,k-x));
        }
        sort(all(a));
        sort(all(b));
        int ans=1;
        forl(i,0,n){
            if(a[i]!=b[i])
                ans=0;
        }
        if(ans) yes;
        else no;
        

    }
}
