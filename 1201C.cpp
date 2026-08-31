//https://codeforces.com/problemset/problem/1201/C

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
    ll n,k;
    cin>>n>>k;
    vll a(n);
    fori(i,0,n) cin>>a[i];
    sort(all(a));
    ll curr=a[n/2];
    ll cnt=1;
    for(ll i=n/2+1;i<n;i++){
        ll diff=a[i]-curr;
        ll need =diff*cnt;
        if(need<=k){
            k-=need;
            curr=a[i];
            cnt++;
        }else{
            curr+=k/cnt;
            cout<<curr<<endl;
            return 0;
        }
    }
    curr+=k/cnt;
    cout<<curr<<endl;
}
