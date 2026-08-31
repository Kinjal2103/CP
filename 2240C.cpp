//https://codeforces.com/problemset/problem/2240/C

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
        ll n;
        cin>>n;
        vll a(n);
        fori(i,0,n) {
            cin>>a[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        ll totalXor=0;
        fori(i,0,n){
            totalXor^=a[i];
        }
        if(totalXor==0){
            cout<<1<<endl;
            continue;
        }
        ll ans=0;
        ll msb=1;
        while((msb<<1)<=totalXor){
            msb<<=1;
        }
        fori(i,0,n){
            if((a[i] & msb)!=0){
                ans++;
            }
        }
        cout<<ans%Mod<<endl;
    }

}
