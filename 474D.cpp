//https://codeforces.com/problemset/problem/474/D

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
    ll t,k;
    cin>>t>>k;
    ll mx=100000;
    vll dp(mx+1),pref(mx+1);
    dp[0]=1;
    for(int i=1;i<=mx;i++){
        dp[i]=dp[i-1];
        if(i>=k){
            dp[i]=(dp[i]+dp[i-k])%MOD;
        }
    }

    for(int i=1;i<=mx;i++){
        pref[i]=(pref[i-1]+dp[i])%MOD;
    }
    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<(pref[b]-pref[a-1]+MOD)%MOD<<endl;
    }
    

}
