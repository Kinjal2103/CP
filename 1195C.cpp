//https://codeforces.com/problemset/problem/1195/C

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
        vll h1(n),h2(n);
        fori(i,0,n) cin>>h1[i];
        fori(i,0,n) cin>>h2[i];

        vvll dp(n,vector<ll>(3));
        dp[0][1]=h1[0];
        dp[0][2]=h2[0];
        for(int i=1;i<n;i++){
            dp[i][0]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
            dp[i][1]=max(dp[i-1][0],dp[i-1][2])+h1[i];
            dp[i][2]=max(dp[i-1][0],dp[i-1][1])+h2[i];
        }
        cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]})<<endl;

    

}
