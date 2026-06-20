//https://codeforces.com/problemset/problem/459/D

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

vector<int>a;
class SegTree{
public:
    int n;
    vector<long long>seg;
    SegTree(int _n){
        n=_n;
        seg.resize(n*4+1);
    }

    void build(int node,int l,int r,bool isOr){
        if(l==r){
            seg[node]=a[l];
            return;
        }

        int mid=(l+r)/2;
        build(2*node,l,mid,!isOr);
        build(2*node+1,mid+1,r,!isOr);
        if(isOr){
            seg[node]=seg[node*2] | seg[node*2+1];
        }else{
            seg[node]=seg[node*2] ^ seg[node*2+1];
        }
    }

    void update(int node,int l,int r, int i,int val,bool isOr){
        if(l==r){
            seg[node]=val;
            return;
        }
        int mid=(l+r)/2;
        if(i<=mid){
            update(2*node,l,mid,i,val,!isOr);
        }else update(2*node+1,mid+1,r,i,val,!isOr);
        if(isOr){
            seg[node]=seg[node*2] | seg[node*2+1];
        }else{
            seg[node]=seg[node*2] ^ seg[node*2+1];
        }
    }

};


vector<int>parent,ans;
int find(int x){
    if(parent[x]==x){
        return x;
    }
    return parent[x]=find(parent[x]);
}

class Fenwick{
public:
    int n;
    vi bit;
    Fenwick(int _n){
        n=_n;
        bit.resize(n+1);
    }

    void update(int idx,int val){
        while(idx<=n){
            bit[idx]+=val;
            idx+=idx&(-idx);
        }
    }

    ll query(int idx){
        int sum=0;
        while(idx>0){
            sum+=bit[idx];
            idx-=idx&(-idx);
        }
        return sum;
    }

    ll rangeQuery(int l,int r){
        return query(r)-query(l-1);
    }

};
int main(){
    fast_io();
    int n;
    cin>>n;
    vi a(n+1);
    fori(i,1,n+1) cin>>a[i];
    vi l(n+1),r(n+1);
    unordered_map<int,int>freq;
    for(int i=1;i<=n;i++){
        freq[a[i]]++;
        l[i]=freq[a[i]];
    }
    freq.clear();
    for(int i=n;i>=1;i--){
        freq[a[i]]++;
        r[i]=freq[a[i]];
    }

    Fenwick ft(n);
    ll ans=0;
    for(int j=1;j<=n;j++){
        ans+=ft.rangeQuery(r[j]+1,n);
        ft.update(l[j],1);
    }
    cout<<ans<<endl;
}
