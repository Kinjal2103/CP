//https://codeforces.com/problemset/problem/1968/D

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
ll score(vector<int>&p,vector<int>&a,int s,int k){
        int n=p.size();
        ll mx=0,cur=0;
        vector<bool>vis(n);
        while(!vis[s]&&k>0){
            vis[s]=1;
            mx=max(mx,cur+1ll*k*a[s]);
            cur+=a[s];
            k--;
            s=p[s];
	    }
	return mx;
}
int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int n,k,s1,s2;
		cin>>n>>k>>s1>>s2;
		vi p(n),a(n);
        fori(i,0,n) {
            cin>>p[i];
            p[i]--;
        }
        fori(i,0,n) {
            cin>>a[i];
        }
        ll A=score(p,a,s1-1,k),B=score(p,a,s2-1,k);
		cout<<(A>B?"Bodya\n":A<B?"Sasha\n":"Draw\n");
    }
}