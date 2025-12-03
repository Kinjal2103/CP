//https://codeforces.com/problemset/problem/1831/B

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
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vi a(n),b(n);
        fori(i,0,n) cin>>a[i];
        fori(i,0,n) cin>>b[i];
        vi ca(2*n+1),cb(2*n+1);
        int t=1;
        fori(i,1,n){
            if(a[i-1]==a[i]) t++;
            else{
                ca[a[i-1]]=max(ca[a[i-1]],t);
                t=1;
            }
        }
        ca[a[n-1]] = max(ca[a[n-1]], t);

        t=1;
        fori(i,1,n){
            if(b[i-1]==b[i]) t++;
            else{
                cb[b[i-1]]=max(cb[b[i-1]],t);
                t=1;
            }
        }
        cb[b[n-1]] = max(cb[b[n-1]], t);
        int ans=0;
        fori(i,1,2*n+1){
            ans=max(ans,ca[i]+cb[i]);
        }
        cout<<ans<<endl;
    }
}