//https://codeforces.com/problemset/problem/2191/A

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

int c[32][32];
int main(){
    fast_io();
    
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;
        vi a(n);
        fori(i,0,n) cin>>a[i];

        vector<vector<int>> adj(n+1);

        for(int i=0;i<n-1;i++){
            int u=a[i],v=a[i+1];
            adj[u].pb(v);
            adj[v].pb(u);
        }

        sort(all(a));
        for(int i=0;i<n-1;i++){
            int u=a[i],v=a[i+1];
            adj[u].pb(v);
            adj[v].pb(u);
        }

        vector<int> color(n+1,-1);
        int k=1;

        for(int v=1;v<=n;v++){
            if(color[v]==-1){
                queue<int>q;
                color[v]=0;
                q.push(v);
                while(!q.empty() && k){
                    int u=q.front();
                    q.pop();
                    for(int w: adj[u]){
                        if(color[w]==-1){
                            color[w]=color[u]^1;
                            q.push(w);
                        }
                        else if(color[w]==color[u]){
                            k=0;
                            break;

                        }
                    }
                }
            }
        }
        if(k) yes;
        else no;
    }
}
