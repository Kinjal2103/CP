//https://codeforces.com/problemset/problem/380/C

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

struct Node{
    int open,close,full;
    Node(int o=0,int c=0,int f=0){
        open=o;
        close=c;
        full=f;
    }
};
class SegTree{
public:
    int n;
    vector<Node>seg;
    string s;
    SegTree(string & _s){
        s=_s;
        n=s.size();
        seg.resize(n*4+1);
        build(1,0,n-1);
    }
    Node merge(Node l,Node r){
        int t=min(l.open,r.close);
        Node res;
        res.full=l.full+r.full+t;
        res.open=l.open+r.open-t;
        res.close=l.close+r.close-t;
        return res;
    }
    void build(int node,int l,int r){
        if(l==r){
            if(s[l]=='(') seg[node]=Node(1,0,0);
            else seg[node]=Node(0,1,0);
            return;
        }

        int mid=(l+r)/2;
        build(2*node,l,mid);
        build(2*node+1,mid+1,r);
        seg[node]=merge(seg[2*node],seg[2*node+1]);
        
        
    }

    Node query(int node,int l,int r, int ql,int qr){
        if(ql>r|| l>qr){
            return Node(0,0,0);
        }
        if(ql<=l && r<=qr){
            return seg[node];
        }
        int mid=(l+r)/2;
        Node left=query(2*node,l,mid,ql,qr);
        Node right=query(2*node+1,mid+1,r,ql,qr);
        return merge(left,right);
    }

};


// vector<int>parent,ans;
// int find(int x){
//     if(parent[x]==x){
//         return x;
//     }
//     return parent[x]=find(parent[x]);
// }

// class Fenwick{
// public:
//     int n;
//     vll bit;
//     Fenwick(int _n){
//         n=_n;
//         bit.resize(n+1);
//     }

//     void update(int idx,int val){
//         while(idx<=n){
//             bit[idx]+=val;
//             idx+=idx&(-idx);
//         }
//     }

//     ll query(int idx){
//         int sum=0;
//         while(idx>0){
//             sum+=bit[idx];
//             idx-=idx&(-idx);
//         }
//         return sum;
//     }

//     ll rangeQuery(int l,int r){
//         return query(r)-query(l-1);
//     }

// };
int main(){
    fast_io();
    string s;
    cin>>s;
    SegTree st(s);
    int m;
    cin>>m;
    int n=s.size();
    while(m--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        Node ans=st.query(1,0,n-1,l,r);
        cout<<2*ans.full<<endl;

    }
}
