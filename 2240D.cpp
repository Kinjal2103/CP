//https://codeforces.com/problemset/problem/2240/D

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
const ll Mod=998244353;
ll power(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1) ans=ans*a%Mod;
        a=a*a%Mod;
        b/=2;
    }
    return ans;
}
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
        ll n,d;
        cin>>n>>d;
        vll a(n);
        ll curr=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=1;i<=d;i++){
            curr+=a[i%n];
            curr+=a[(n-i)%n];
        }

        ll ans=0;
        for(int i=0;i<n;i++){
            ll gain=2*d*a[i]-curr;
            if(gain>0) ans+=gain;
            curr-=a[(i+n-d)%n];
            curr+=a[i];
            curr-=a[(i+1)%n];
            curr+=a[(i+d+1)%n];
        }
        cout<<ans<<endl;
    }

}
