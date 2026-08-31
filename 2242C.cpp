//https://codeforces.com/problemset/problem/2242/C

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

int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vi a(n);
        fori(i,0,n) cin>>a[i];

        vll counts;
        ll curr=1;
        for(int i=1;i<n;i++){
            if(a[i-1]==a[i]) curr++;
            else{
                counts.pb(curr);
                curr=1; 
            }
        }
        counts.pb(curr);
        sort(all(counts));

        vll v=counts;
        v.erase(unique(v.begin(),v.end()),v.end());
        v.insert(v.begin(),0);
        int m=counts.size();
        int currLen=n;
        int ans=0;
        int idx=0;

        for(int i=0;i<v.size()-1;i++){
            int curr=v[i];
            int next=v[i+1];
            while(idx<counts.size() && counts[idx]<=curr){
                currLen-=counts[idx];
                m--;
                idx++;
            }
            if(m>0){
                int diff=k-currLen;
                if(diff%m==0){
                    int x=diff/m;
                    if(x+next>0) ans++;
                }
            }
        }
        cout<<ans<<endl;

    }   
    
}