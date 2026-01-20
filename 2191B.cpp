//https://codeforces.com/problemset/problem/2191/B

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

int c[32][32];
int main(){
    fast_io();
    
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;
        vi a(n);

        fori(i,0,n) cin>>a[i];

        vector<int> f(n+1,0);
        for(int x: a) f[x]++;

        int m=0;
        while(m<=n && f[m]>0) m++;

        if(m==0) no;
        else if (m==1){
            if(f[0]>1) no;
            else yes;
        }else{
            yes;
        }
        
    }
}
