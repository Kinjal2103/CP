//https://codeforces.com/problemset/problem/2179/E

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
        int n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        int o=0,z=0;
        vll a(n+1);
        ll sum=0;
        fori(i,1,n+1) {
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<n;i++){
            if(s[i]=='0') z++;
            else o++;
        }
        
        if(x+y<sum){
            no;
            continue;
        }
        ll xneed=0;
        if(o==n || z==n){
            if(o==n){
                swap(x,y);
            }
            for(int i=1;i<=n;i++){
                xneed+=a[i]/2+1;
            }
            if(x<xneed || x<y+n){
                no;
            }else{
                yes;
            }
            continue;
        }

        xneed=0;
        ll yneed=0;
        for(int i=1;i<=n;i++){
            if(s[i-1]=='0'){
                xneed+=a[i]/2+1;
            }else{
                yneed+=a[i]/2+1;
            }
        }
        if(x>=xneed && y>=yneed ){
            yes;
        }else no;
    }
}