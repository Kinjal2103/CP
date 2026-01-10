//https://codeforces.com/problemset/problem/1872/D

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
ll calculateSum(ll s,ll e){
    ll sum=(s+e)*(e-s+1)/2;
    return sum;
}
int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        //BRUTE FORCE APPROACH
        // int add=n,subtract=1;
        // long long ans=0;
        // for(int i=1;i<=n;i++){
        //     if(i%x==0 && i%y!=0){
        //         ans+=add;
        //         add--;
        //     }else if(i%x!=0 && i%y==0){
        //         ans-=subtract;
        //         subtract++;
        //     }
        // }
        
        ll ans=0;
        ll cx=n/x - n/lcm(x,y);
        ll cy=n/y - n/lcm(x,y);
        ans=calculateSum(n-cx+1,n)-calculateSum(1LL,cy);
        cout<<ans<<endl;
        
    }
}