//https://codeforces.com/problemset/problem/1827/A

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
        int n;
        cin>>n;
        vi a(n);
        vi b(n);
        fori(i,0,n) cin>>a[i];
        sort(all(a));
        fori(i,0,n) cin>>b[i];
        sort(rall(b));
        ll ans=1;
        for(int i=0;i<n;i++){
            int t=upper_bound(a.begin(),a.end(),b[i]) -a.begin();
            int count=a.size()-t;
            ans =ans*max(count-i,0)% MOD;
        }
        cout<<ans<<endl;
    }
}