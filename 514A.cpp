//https://codeforces.com/problemset/problem/514/A

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
    ll x;
    cin>>x;
    ll ans=0;
    vector<int>a;
    while(x){
        int d=x%10;
        x/=10;
        int v=min(9-d,d);
        if(v==0 && !x){
            a.pb(9);
        }else{
            a.pb(v);
        }
    }
    for(int i=a.size()-1;i>=0;i--){
        ans=ans*10+a[i];
    }
    cout<<ans<<endl;

}
