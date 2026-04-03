//https://codeforces.com/problemset/problem/2210/C1

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
const int MODc=676767677;
int main(){
    fast_io();
    
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;
        vll a(n);
        fori(i,0,n){
            cin>>a[i];
        }
        fori(i,0,n) {
            int x;
            cin>>x;
        }
        int ans=0;
        int same=1;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                same=0;
                break;
            }
        }
        if(same){
            cout<<ans<<endl;
            continue;
        }

        fori(i,0,n){
            if(i==0){
                if(gcd(a[0],a[1]) != a[0]) ans++;
            }
            else if(i == n-1){
                if(gcd(a[n-2], a[n-1]) != a[n-1]) ans++;
            }
            else{
                ll g1 = gcd(a[i-1], a[i]);
                ll g2 = gcd(a[i], a[i+1]);
                ll l=lcm(g1,g2);
                if(l<a[i]) ans++;
            }
        }
        cout<<ans<<endl;
    }
}
