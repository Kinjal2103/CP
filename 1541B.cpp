//https://codeforces.com/problemset/problem/1541/B

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
        int n;
        cin>>n;
        vi pos(2*n+1);

        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            pos[x]=i;
        }
        ll ans=0;
        for(int x=1;x<=2*n;x++){
            if(!pos[x]) continue;
            for(int y=x+1;1LL*x*y<=2*n;y++){
                if(!pos[y]) continue;
                if(pos[x]+pos[y]==x*y){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    
}
