//https://codeforces.com/problemset/problem/2236/C

#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>> 
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
const ll INF=-1e18;
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
        ll a,b,x;
        cin>>a>>b>>x;

        if(a==b){
            cout<<0<<endl;
            continue;
        }
        if(max(a,b)<x){
            cout<<min(2LL,abs(a-b))<<endl;
            continue;
        }
        vll possA;
        ll curr=a;
        while(curr){
            possA.pb(curr);
            curr/=x;
        }
        possA.pb(0);
        vll possB;
        curr=b;
        while(curr){
            possB.pb(curr);
            curr/=x;
        }
        possB.pb(0);
        ll ans=LLONG_MAX;
        fori(i,0,possA.size()){
            fori(j,0,possB.size()){
                ll s=i+j+abs(possA[i]-possB[j]);
                ans=min(ans,s);
            }
        }
        cout<<ans<<endl;
    }
}
