//https://codeforces.com/problemset/problem/1036/C

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

string s;
ll dp[20][4][2];

ll helper(int pos,int cnt,int tight){
    if(cnt>3) return 0;
    if(pos==s.size()) return 1;
    ll &ans=dp[pos][cnt][tight];
    if(ans!=-1) return ans;
    ans=0;
    int lim=tight?s[pos]-'0':9;
    for(int d=0;d<=lim;d++){
        ans+=helper(pos+1,cnt+(d!=0), tight&& (d==lim));
    }
    return ans;
}
ll solve(ll x){
    if(x<0) return 0;
    s=to_string(x);
    memset(dp,-1,sizeof(dp));
    return helper(0,0,1);
}
int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        cout<<solve(r)-solve(l-1)<<endl;
    }
    
}
