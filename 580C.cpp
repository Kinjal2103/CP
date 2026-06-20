//https://codeforces.com/problemset/problem/580/C

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
    int n,m;
    cin>>n>>m;
    vi a(n+1);
    fori(i,1,n+1) {
        cin>>a[i];
    }
    vvi adj(n+1);
    int x,y;
    fori(i,0,n-1){
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vi vis(n+1);
    int ans=0;
    queue<vector<int>>q;
    q.push({1,a[1]});
    vis[1]=1;
    while(!q.empty()){
        int u=q.front()[0];
        int c=q.front()[1];
        q.pop();
        if(c>m){
            continue;
        }
        bool leaf=true;
        for(int v:adj[u]){
            if(!vis[v]){
                leaf=false;
                vis[v]=1;
                if(a[v]){
                    q.push({v,c+1});
                }else{
                    q.push({v,0});
                }

            }
        }
        if(leaf) ans++;
    }
    cout<<ans<<endl;
}
