//https://codeforces.com/problemset/problem/2184/D

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
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
};
ll lcm(ll a ,ll b){
    return (a*b)/gcd(a,b);
}
#include <iomanip>
void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int c[32][32];
int main(){
    fast_io();
    for (int i = 0; i < 30; ++i) {
        for (int j = 0; j < 30; ++j) {
            if (i < j) c[i][j] = 0;
            else if (j == 0) c[i][j] = 1;
            else c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
        }
    }
    int t;
    cin>>t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int d = 0;
        while (n % 2 == 0) {
            n /= 2;
            ++d;
        }

        int ans = 0;
        for (int max_bit = 0; max_bit < d; ++max_bit) {
            for (int cnt_bit = 1; cnt_bit <= max_bit + 1; ++cnt_bit) {
                if (max_bit + cnt_bit <= k) continue;
                ans += c[max_bit][cnt_bit - 1];
            }
        }

        if (d + 1 > k) ++ans;
        cout << ans << "\n";

        // int n,k;
        // cin>>n>>k;

        // if(n<=k){
        //     cout<<0<<endl;
        //     continue;
        // }

        // vector<int> dp(n+1);
        // dp[1]=1;
        // dp[2]=2;
        // for(int i=3;i<=n;i++){
        //     if(i%2==0){
        //         dp[i]=dp[i/2]+1;
        //     }else{
        //         dp[i]=dp[i-1]+1;
        //     }
        // }
        // int ans=0;
        // for(int i=1;i<=n;i++){
        //     if(dp[i]>k) ans++; 
        // }
        // cout<<ans<<endl;
    }
}
