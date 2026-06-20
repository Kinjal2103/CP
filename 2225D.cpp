//https://codeforces.com/problemset/problem/2225/D

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
        ll n, x;
        cin>>n >>x;
        const int MODQ=998244353;
        ll l0=1+x/4;
        ll r0=(n+1)/4-x/4;

        ll l1=(x+2)/4;
        ll r1=(n+3)/4-(x+2)/4;
        ll ans=((l0 % MODQ)*(r0 % MODQ))% MODQ;
        ans=(ans+((l1 % MODQ)*(r1 % MODQ))%MODQ)%MODQ;
        cout << ans % MODQ << '\n';
    }
}
