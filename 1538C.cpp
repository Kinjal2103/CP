//https://codeforces.com/problemset/problem/1538/C

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

ll pairs(vector<ll>&a,int target){
    ll ans=0;
    for(int i=0;i<a.size();i++){
        int x=a[i];
        int pos=upper_bound(a.begin()+i+1,a.end(),target-x)-(a.begin()+i+1);
        ans+=pos;
    }
    return ans;
}
int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        vll a(n);
        fori(i,0,n) cin>>a[i];
        sort(all(a));

        cout<<pairs(a,r)-pairs(a,l-1)<<endl;
    }
}
