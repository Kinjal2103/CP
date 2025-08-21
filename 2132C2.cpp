//https://codeforces.com/contest/2132/problem/C2
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
#define vmax(v) *max_element(all(v))
#define vmin(v) *min_element(all(v))

void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
ll minDeals(ll n){
    ll ans=0;
    while(n){
        ans+=n%3;
        n/=3;
    }
    return ans;
}
int main() {
    fast_io();
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll minD=minDeals(n);
        if(k<minD){
            cout<<"-1"<<endl;
            continue;
        }
        if(k>=n){
            cout<<3*n<<endl;
            continue;
        }
        ll cost=3*n;
        ll merges=(n-k+1)/2;

        ll p=1;
        ll c=n;

        while(merges>0){
            ll possible=c/3;
            ll taken=min(possible,merges);

            cost+=taken*p;
            merges-=taken;

            c=possible+(c%3);
            p*=3;
        }
        cout<<cost<<endl;
    }
}