//https://codeforces.com/problemset/problem/2204/D
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

ll lcm(ll a, ll b){
    return a / __gcd(a,b) * b;
}

void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast_io();
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vvi g(n+1);
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            g[u].pb(v);
            g[v].pb(u);
        }
        vi vis(n+1),color(n+1,-1);
        ll ans=0;
        fori(i,1,n+1){

            if(!vis[i]){
                
                queue<int>bfs;
                bfs.push(i);
                vis[i]=1;
                color[i]=0;
                int cnt[2]={1,0};
                bool isb=true;
                while(!bfs.empty()){
                    int u=bfs.front();
                    bfs.pop();
                    for(auto v:g[u]){
                        if(!vis[v]){
                            vis[v]=1;
                            color[v]=color[u]^1;
                            cnt[color[v]]++;
                            bfs.push(v);
                        }else if(color[v]==color[u]){
                            isb=false;
                        }
                    }
                }
                if(isb){
                    ans+=max(cnt[0],cnt[1]);
                }
            }
        }
        cout<<ans<<endl;

    }   
}