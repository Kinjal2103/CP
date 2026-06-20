//https://codeforces.com/problemset/problem/698/A

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
    int n;
    cin>>n;
    vi a(n);
    fori(i,0,n) cin>>a[i];
    vvi dp(n+1,vector<int>(3,INT_MAX));
    dp[0][0]=0;
    int prev=-1;
    for(int i=1;i<=n;i++){
        int x=a[i-1];
        dp[i][0]=min({dp[i-1][0],dp[i-1][1],dp[i-1][2]})+1;
        if(x==1|| x==3){
            dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
        }
        if(x==2|| x==3){
            dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
        }

    }
    cout<<min({dp[n][0],dp[n][1],dp[n][2]})<<endl;
}
