//https://codeforces.com/problemset/problem/2232/C1

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
        int n,x,s;
        cin>>n>>x>>s;
        string u;
        cin>>u;
        vvi dp(n+1,vector<int>(x+1,-1));
        dp[0][x]=0;
        for(int i=0;i<n;i++){
            int c=u[i];
            for(int j=0;j<=x;j++){
                if(dp[i][j]==-1) continue;
                int seated=dp[i][j];
                ll can=(x-j)*s-seated;
                dp[i+1][j]=max(dp[i+1][j],seated);
                if(c=='I'|| c=='A'){
                    if(j>0){
                        dp[i+1][j-1]=max(dp[i+1][j-1],seated+1);
                    }
                }
                if(c=='E' || c=='A'){
                    if(can>0){
                        dp[i+1][j]=max(dp[i+1][j],seated+1);
                    }
                }
            }
        }
        cout<<vmax(dp[n])<<endl;
    }
}
