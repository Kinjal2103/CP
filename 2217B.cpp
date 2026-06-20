//https://codeforces.com/problemset/problem/2217/B

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
        int n,k,p;
        cin>>n>>k;
        vi a(n);
        fori(i,0,n) cin>>a[i];
        cin>>p;
        p--;
        int x=a[p];
        int ans=0;
        int l=0;
        int exp=x;
        for (int i=0;i<p;i++) {
            if (a[i]!=exp) 
                l++;
            exp=a[i];
        }
        int r=0;
        exp=x;
        for (int i=n-1; i>p; i--) {
            if (a[i]!=exp) 
                r++;
            exp=a[i];
        }
        ans=max(r,l);
        if(ans%2) ans++;
        cout<<ans<<endl;


    }
}
