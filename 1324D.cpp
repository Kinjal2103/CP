//https://codeforces.com/problemset/problem/1324/D

#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>> 
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
const ll INF=-1e18;
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

int main(){
    fast_io();
    ll n;
    cin>>n;
    vll a(n),b(n);
    fori(i,0,n) cin>>a[i];
    fori(i,0,n) cin>>b[i];
    
    vll c(n);
    fori(i,0,n) c[i]=a[i]-b[i];

    sort(all(c));
    ll ans=0;
    ll l=0,r=n-1;
    while(l<r){
        if(c[l]+c[r]>0){
            ans+=(r-l);
            r--;
        }else{
            l++;
        }
    }
    cout<<ans<<endl;
}
