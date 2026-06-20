//https://codeforces.com/problemset/problem/61/E

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
    vll bit;
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
    vi a(n);
    fori(i,0,n) cin>>a[i];
    ll ans=0;
    vi b=a;
    sort(all(b));
    for(int i=0;i<n;i++){
        a[i]=lower_bound(b.begin(),b.end(),a[i]) - b.begin()+1;
    }
    Fenwick lft(n),rft(n);
    for(int x:a){
        rft.update(x,1);
    }
    int leftCount=0;
    for(int j=0;j<n;j++){
        rft.update(a[j],-1);
        ll lg=leftCount-lft.query(a[j]);
        ll rs=rft.query(a[j]-1);
        ans+=lg*rs;
        lft.update(a[j],1);
        leftCount++;
    }
    cout<<ans<<endl;
}
