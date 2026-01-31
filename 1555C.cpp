//https://codeforces.com/problemset/problem/1555/C

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
        int m;
        cin>>m;
        vvi a(2,vi(m));
        fori(i,0,2){
            fori(j,0,m){
                cin>>a[i][j];
            }
        }
        int ans=INT_MAX;
        int sum1=0,sum2=0;
        fori(i,0,m){
            sum1+=a[0][i];
        }
        fori(i,0,m){
            sum1-=a[0][i];
            ans=min(ans,max(sum1,sum2));
            sum2+=a[1][i];
        }
        cout<<ans<<endl;
    }
}
