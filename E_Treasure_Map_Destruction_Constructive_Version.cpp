//https://codeforces.com/contest/2259/problem/E

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

int main(){
    fast_io();
      
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi b(n);
        vi d(n+1);
        vi ans(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]==0){
                ans[i]=1;
                continue;
            }
            if(b[i]>0){
                int l=max(0,i-b[i]+1);
                int r=min(n-1,i+b[i]-1);
                d[l]++;
                d[r+1]--;
            }
        }

        vi al(n);
        int curr=0;
        for(int i=0;i<n;i++){
            curr+=d[i];
            if(curr==0){
                al[i]=1;
            }
        }

        int poss=1;
        fori(i,0,n){
            if(b[i]<=0) continue;

            int diff=b[i];
            int l=i-diff;
            int r=i+diff;

            bool found=false;
            if(l>=0 && al[l]){
                ans[l]=1;
                found=true;
            }

            if(r<n && al[r]){
                ans[r]=1;
                found=true;
            }

            if(!found){
                poss=0;
                break;
            }
        }
        if(!poss){
            cout<<-1<<endl;
            continue;
        }

        bool t=0;
        fori(i,0,n){
            if(ans[i]) {
                t=1;
                break;
            }
        }
        if(!t){
            ans[0]=1;
        }

        vi dist(n,n+1);
        int last=INT_MIN;

        fori(i,0,n){
            if(ans[i]){
                last=i;
            }
            if(last!=INT_MIN){
                dist[i]=i-last;
            }
        }

        last=INT_MAX;

        for(int i=n-1;i>=0;i--){
            if(ans[i]){
                last=i;
            }
            if(last!=INT_MAX){
                dist[i]=min(dist[i],last-i);
            }
        }

        fori(i,0,n){
            if(b[i]!=-1 && b[i]!=dist[i]){
                poss=0;
                break;
            }
        }

        if(!poss){
            cout<<-1<<endl;
            continue;
        }

        for(int x:ans){
            cout<<x;
        }
        cout<<endl;
    }
}