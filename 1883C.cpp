//https://codeforces.com/problemset/problem/1883/C

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
        int n,k;
        cin>>n>>k;
        vi a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=INT_MAX;
        int e=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0) e++;
            if(a[i]%k==0) ans=0;
            ans=min(ans,k-a[i]%k);
        }
        if(k==4){
            if(e>=2) ans=min(ans,0);
            if(e==1) ans=min(ans,1);
            else ans=min(ans,2);
        }
        cout<<ans<<endl;
    }
}