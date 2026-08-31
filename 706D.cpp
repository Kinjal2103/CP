//https://codeforces.com/contest/706/problem/D

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
void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

struct Node{
    int child[2];
    int cnt=0;
    Node(){
        child[0]=child[1]=-1;
        cnt=0;
    }
};

vector<Node>trie(1);
void insert(int x){
    int node=0;
    trie[node].cnt++;
    for(int i=30;i>=0;i--){
        int bits=(x>>i)&1;
        if(trie[node].child[bits]==-1){
            trie[node].child[bits]=trie.size();
            trie.push_back(Node());
        }
        node=trie[node].child[bits];
        trie[node].cnt++;
    }
}

void remove(int x){
    int node=0;
    trie[node].cnt--;
    for(int i=30;i>=0;i--){
        int bits=(x>>i)&1;
        
        node=trie[node].child[bits];
        trie[node].cnt--;
    }
}

int getMax(int x){
    int node=0;
    int ans=0;
    for(int i=30;i>=0;i--){
        int bits=(x>>i)&1;
        int opp=bits^1;
        if(trie[node].child[opp]!=-1 && trie[trie[node].child[opp]].cnt>0){
            ans|=(1<<i);
            node=trie[node].child[opp];
        }else{
            node=trie[node].child[bits];
        }
    }
    return ans;
}
int main(){
    fast_io();
    // int t;
    // cin>>t;
    // while(t--){
        
    // }   
    int q;
    cin>>q;
    insert(0);
    while(q--){
        char type;
        int x;
        cin>>type>>x;
        if(type=='+'){
            insert(x);
        }else if(type=='-') remove(x);
        else{
            cout<<getMax(x)<<endl;
        }
    }
    
}