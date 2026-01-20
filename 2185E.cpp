//https://codeforces.com/problemset/problem/2185/E

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
        int n,m,k;
        cin>>n>>m>>k;
        vi r(n),s(m);
        fori(i,0,n) cin>>r[i];
        fori(i,0,m) cin>>s[i];
        sort(all(s));
        string st;
        cin>>st;

        vi R(k+2),L(k+2);
        int off=0,mxr=0,mxl=0;
        fori(i,1,k+1){
            off+=(st[i-1]=='R'?1:-1);
            if(off>mxr) mxr=off,R[mxr]=i;
            if(off<mxl) mxl=off,L[-mxl]=i;
        }
        fori(i,1,mxr+1) if(!R[i]) R[i]=R[i-1];
        fori(i,1,-mxl+1) if(!L[i]) L[i]=L[i-1];

        vi dead(k+2);
        const int INF=1e9;

        fori(i,0,n){
            int x=r[i];
            int res=INF;

            int lo=0,hi=m;
            while(lo<hi){
                int md=(lo+hi)>>1;
                if(s[md]>=x) hi=md;
                else lo=md+1;
            }

            if(lo<m){
                int d=s[lo]-x;
                if(d>0 && d<=mxr && R[d]<res) res=R[d];
            }
            if(lo>0){
                int d=x-s[lo-1];
                if(d>0 && d<=-mxl && L[d]<res) res=L[d];
            }

            if(res!=INF) dead[res]++;
        }

        int gone=0;
        fori(i,1,k+1){
            gone+=dead[i];
            cout<<(n-gone)<<(i==k?'\n':' ');
        }
    }
}
