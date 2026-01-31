//https://codeforces.com/problemset/problem/1742/E

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
        int n,q;
        cin>>n>>q;
        vi a(n),k(q);
        fori(i,0,n) cin>>a[i];
        fori(i,0,q) cin>>k[i];

        vi maxV(n); vll prefixSum(n);
        maxV[0]=prefixSum[0]=a[0];
        fori(i,1,n){
            maxV[i]=max(maxV[i-1],a[i]);
            prefixSum[i]=prefixSum[i-1]+a[i];
        }
        vll ans(q);
        fori(i,0,q){
            int v=k[i];
            int l=0,r=n-1;
            int idx=-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(maxV[mid]<=v){
                    idx=mid;
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
            if(idx!=-1) ans[i]=prefixSum[idx];
            else ans[i]=0;
        }
        fori(i,0,q){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
