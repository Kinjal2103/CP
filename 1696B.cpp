//https://codeforces.com/problemset/problem/1696/B
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

void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main() {
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vll a(n);
        int k=0;
        fori(i,0,n){
            cin>>a[i];
            if(a[i]!=0) k=1;
        }
        if(k==0){
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        int l=0;
        while(a[l]==0 && l<n) l++;
        int r=n-1;
        while(a[r]==0 && r>=0) r--;
        fori(i,l,r+1){
            if(a[i]==0) ans++;
        }
        if(ans) cout<<2<<endl;
        else cout<<1<<endl;

    }
}