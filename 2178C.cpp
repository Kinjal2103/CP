//https://codeforces.com/problemset/problem/2178/C

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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vll a(n);
        fori(i,0,n){
            cin>>a[i];
        }
        ll x=0;
        vll pre(n);
        pre[0]=a[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+a[i];
        }
        vll dp(n+1);
        ll mx=LLONG_MIN;
        for(int i=n-1;i>=0;i--){
            if(i==n-1) dp[i]=0;
            else{
                ll take= a[i]+pre[i]+  mx;
                ll nottake= pre[i]-pre[n-1];
                dp[i]=max(take,nottake);
            }
            if(i>0) mx=max(mx,dp[i]-pre[i-1]);
        }
        cout<<dp[0]<<endl;
    }
}