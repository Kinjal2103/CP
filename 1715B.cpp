//https://codeforces.com/problemset/problem/1715/B

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
#define vmax(v) *max_element(all(v))
#define vmin(v) *min_element(all(v))
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
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<long long>ans(n);
        long long  mx=k*b+(k-1)*n;
        long long  mn=k*b;
        if(s<mn || s>mx) {
            cout<<-1<<endl;
            continue;
        }
        ans[0]=mn;
        s-=mn;
        for(long long  i=0;i<n;i++){
            ans[i]+=min(k-1,s);
            s-=min(k-1,s);
        }
        for(long long  i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}