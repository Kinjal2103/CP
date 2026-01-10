//https://codeforces.com/problemset/problem/2178/B

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
        string r;
        cin>>r;
        int ans=0;
        int n=r.length();
        if(r[0]=='u') {
            ans++;
        }if(r[n-1]=='u'){
            ans++;
        }
        int u=0;
        for(int i=1;i<n-1;i++){
            if(r[i]=='u'){
                u++;
            }
            else{
                ans+=u/2;
                u=0;
            }
        }
        ans+=u/2;
        cout<<ans<<endl;
    }
}