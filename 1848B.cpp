//https://codeforces.com/problemset/problem/1848/B

#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
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
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
};
ll lcm(ll a ,ll b){
    return (a*b)/gcd(a,b);
}
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
        int n,k;
        cin>>n>>k;
        vi c(n+1);
        fori(i,1,n+1) cin>>c[i];
        int ans=INT_MAX;
        vector<vector<int>> colors(k+1);
        for(int i=1;i<=k;i++){
            colors[i].push_back(0);
        }
        for(int i=1;i<=n;i++){
            colors[c[i]].push_back(i);
        }
        for(int i=1;i<=k;i++){
            colors[i].push_back(n+1);
        }
        
        for(int i=1;i<=k;i++){
            
            priority_queue<int> jumps;
            for(int j=0;j<colors[i].size()-1;j++){
                jumps.push(colors[i][j+1]-colors[i][j]-1);
            }
            int mx=jumps.top();
            jumps.pop();
            if(mx%2){
                jumps.push(mx/2);
                jumps.push(mx/2);
            }else{
                jumps.push(mx/2);
                jumps.push((mx/2)-1);
            }
            ans=min(ans,jumps.top());
        }
        cout<<ans<<endl;
        
    }
}