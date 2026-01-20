//https://codeforces.com/problemset/problem/2185/D

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

int main(){
    fast_io();
    
    int t;
    cin>>t;

    while (t--) {
        int n,m,h;
        cin>>n>>m>>h;
        vi a(n);
        fori(i,0,n) cin>>a[i];
        vi b(m),c(m);
        fori(i,0,m) {
            cin>>b[i];
            cin>>c[i];
        }
        
        vi d(n,0);
        vi seen (n,-1);
        int j=0;

        fori(i,0,m){
            int idx=b[i]-1;
            int val=c[i];
            if(seen[idx]!=j){
                seen[idx]=j;
                d[idx]=0;
            }

            d[idx]+=val;
            if(a[idx]+d[idx]>h){
                j++;
            }
        }

        fori(i,0,n){
            if(seen[i]==j)
                cout<<a[i]+d[i]<<" ";
            else {
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
}
