//https://codeforces.com/problemset/problem/20/C

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
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>> g(n+1);
    fori(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({w,v});
        g[v].push_back({w,u});
    }
    vll parent(n+1,-1),dist(n+1,LLONG_MAX);
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>>pq;
    dist[1]=0;
    pq.push({0,1});
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d!=dist[u]) continue;
        for(auto &[w,v]:g[u]){
            if(dist[v]>dist[u]+w){
                parent[v]=u;
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
    if(dist[n]==LLONG_MAX){
        cout<<-1<<endl;
        return 0;
    }
    vector<int>path;
    int cur=n;
    while(cur!=-1){
        path.pb(cur);
        cur=parent[cur];
    }
    reverse(all(path));
    for(int x:path){
        cout<<x<<" ";
    }
    cout<<endl;
}
