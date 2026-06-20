//https://cses.fi/problemset/task/2163

#include<bits/stdc++.h>
using namespace std;

class SegTree{
public:
    int n;
    vector<int>seg;
    SegTree(int _n){
        n=_n;
        seg.resize(4*n);
        build(1,1,n);
    }
    void build(int node,int l,int r){
        if(l==r){
            seg[node]=1;
            return;
        }
        int mid=(l+r)/2;
        build(2*node,l,mid);
        build(2*node+1,mid+1,r);
        seg[node]=seg[2*node]+seg[2*node+1];
    }
    void update(int node,int l,int r,int idx){
        if(l==r){
            seg[node]=0;
            return ;
        }
        int mid=(l+r)/2;
        if(idx<=mid){
            update(2*node,l,mid,idx);
        }else{
            update(2*node+1,mid+1,r,idx);
        }
        seg[node]=seg[2*node]+seg[2*node+1];
    }
    int kth(int node,int l,int r,int k){
        if(l==r) return l;
        int mid=(l+r)/2;
        if(seg[2*node]>=k){
            return kth(2*node,l,mid,k);
        }
        return kth(2*node+1,mid+1,r,k-seg[2*node]);
    }
};
int main(){
    int n,k;
    cin>>n>>k;
    SegTree st(n);
    long long pos=0;
    long long alive =n;
    while(alive){
        pos=(pos+k)%alive;
        int person=st.kth(1,1,n,pos+1);
        cout<<person<<" ";
        st.update(1,1,n,person);
        alive--;
    }
    cout<<endl;
    
}