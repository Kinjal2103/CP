//https://codeforces.com/problemset/problem/1840/C

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
        ll n,k,q;
        cin>>n>>k>>q;
        vll a(n);
        forl(i,0,n){
            cin>>a[i];
        }
        vll b(n,0);
        ll sum=0;
        forl(i,0,n){
            if(a[i]<=q) b[i]=1;
            if(b[i]==1) sum++;
        }
        if(sum<k){
            cout<<"0"<<endl;
            continue;
        }
        ll ans=0;
        vll s;
        forl(i,0,n){
            int c=0;
            while(i<n && b[i]==1){
                c++;
                i++;
            }
            if(c>=k) ans+=(c-k+1)*(c-k+2)/2;
        }
        cout<<ans<<endl;

    }
}