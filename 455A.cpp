//https://codeforces.com/problemset/problem/455/A

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
    int n;
    cin>>n;
    vll freq(100001);
    int x;
    fori(i,0,n){
        cin>>x;
        freq[x]++;
    }

    vll dp(100001);
    dp[1]=freq[1];
    for(int i=2;i<=100000;i++){
        ll take=dp[i-2]+1LL*i*freq[i];
        ll skip =dp[i-1];
        dp[i]=max(skip,take);
    }
    cout<<dp[100000]<<endl;
    
}
