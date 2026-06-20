//https://codeforces.com/problemset/problem/520/B

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

int bfs(int n,int m){
    vector<int> vis(10001);
    queue<int>q;
    q.push(n);
    vis[n]=1;
    int ans=0;
    while(!q.empty()){
        int sz=q.size();
        for(int i=0;i<sz;i++){
            int cur=q.front();
            q.pop();
            if(cur==m) {
                return ans;
            }
            if(cur-1>=0 && !vis[cur-1]){
                q.push(cur-1);
                vis[cur-1]=1;
            }
            if(2*cur<=10000 && !vis[2*cur]){
                q.push(2*cur);
                vis[cur*2]=1;
            }
        }
        ans++;
    }
    return ans;
}
int main(){
    fast_io();
    int n,m;
    cin>>n>>m;
    
    cout<<bfs(n,m)<<endl;
}
