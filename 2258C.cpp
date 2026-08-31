//https://codeforces.com/contest/2258/problem/C

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

struct BIT{
    int n;
    vector<int>bit;
    BIT(int _n){
        n=_n;
        bit.resize(n+1);
    }
    void update(int idx,int val){
        while(idx<=n){
            bit[idx]+=val;
            idx+=idx& -idx;
        }
    }
    int query(int idx){
        int sum=0;
        while(idx>0){
            sum+=bit[idx];
            idx-=idx&-idx;
        }
        return sum;
    }
};

struct TrieNode{
    TrieNode *child[26];
    TrieNode(){
        for(int i=0;i<26;i++){
            child[i]=nullptr;
        }
    }
};

#include <iomanip>
const ll Mod=998244353;

int getBits(ll x){
    int b=0;
    while(x){
        b++;
        x/=2;
    }
    return b;
}

ll power(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1) ans=ans*a%Mod;
        a=a*a%Mod;
        b/=2;
    }
    return ans;
}

int ask(int u,int v,int d,vvi & dist){
    if(dist[u][v]<=d) return 0;
    cout<<"? "<<u<<" "<<v<<" "<<d<<endl;
    cout.flush();
    int ans;
    cin>>ans;
    if(ans==-1){
        exit(0);
    }
    return ans;
}
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
        int mx=0;
        int node=1;
        
        vvi dist(n+1,vi(n+1,INT_MAX));
        for(int i=2;i<=n;i++){
            while(ask(1,i,mx+1,dist)){
                    mx++;
                    node=i;
                    
            }
            dist[1][node]=dist[node][1]=mx;
            
        }
        int nxtNode=1;
        for(int i=1;i<=n;i++){
            if(i==node) continue;
            while(ask(node,i,mx+1,dist)){
                    mx++;
                    nxtNode=i;
                }
            dist[node][nxtNode]=dist[nxtNode][node]=mx;
        }

        cout<<"! "<<node<<" "<<nxtNode<<" "<<mx<<endl;
        cout.flush();
    }

    
}