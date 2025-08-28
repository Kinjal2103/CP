//https://codeforces.com/problemset/problem/1607/B
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
        ll x,n;
        ll ans;
        cin>>x>>n;
        if(n%4==1){
            ans=-n;
        }else if(n%4==2){
            ans=1;
        }else if(n%4==3){
            ans=n+1;
        }else if(n%4==0){
            ans=0;
        }
        if(x%2==0){
            ans+=x;
        }
        else{
            ans=x-ans;
        }
        cout<<ans<<endl;
    }
}