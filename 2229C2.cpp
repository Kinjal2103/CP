//https://codeforces.com/problemset/problem/2229/C2

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

int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vll a(n+1);
        fori(i,1,n+1){
            cin>>a[i];
        }

        vvll dp(n+2,vll (3,INF));
        dp[n+1][0]=0;
        vector<vpii> par( n + 1, vpii(2) );
        for(int i=n;i>=1;i--){
            if(dp[i+1][0]!=INF){
                dp[i][0]=a[i]+dp[i+1][0];
            }
            ll c1=dp[i+1][1];
            ll c2=dp[i+1][2];
            ll c3=(a[i]>0) ? dp[i+1][0]:INF;
            ll mx1=max({c1,c2,c3});
            if(mx1!=INF){
                dp[i][1]=-a[i]+mx1;
            }
            ll mx2=max(c1,c2);
            if(mx2!=INF){
                dp[i][2]=a[i]+mx2;
            }
        }

        int st=0;
        ll mx=dp[1][0];
        if(dp[1][1]>mx){
            mx=dp[1][1];
            st=1;
        }
        if(dp[1][2]>mx){
            mx=dp[1][2];
            st=2;
        }
        vi s(n+2);
        for(int i=1;i<=n;i++){
            if(st==1) s[i]=1;
            else s[i]=0;

            int ns=-1;
            if(st==0){
                ns=0;
            }else if(st==1){
                if(a[i]>0 && dp[i][1]==-a[i]+dp[i+1][0]) ns=0;
                else if(dp[i][1]==-a[i]+dp[i+1][1]) ns=1;
                else ns=2;
            }else{
                if(dp[i][2]==a[i]+dp[i+1][1]) ns=1;
                else ns=2;
            }
            st=ns;
        }
        vi ans;
        for(int i=1;i<=n;i++){
            if(s[i]!=s[i+1]){
                ans.pb(i);
            }
        }
        reverse(all(ans));
        list<int> ops; 
        for(int x : ans){
            if(a[x] > 0){ 
                ops.push_front(x); 
            } else {
                auto it = ops.begin(); 
                if(it != ops.end()) it++;
                ops.insert(it, x); 
            } 
        } 
        cout<<ops.size()<<endl;
        for(int x:ops){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
