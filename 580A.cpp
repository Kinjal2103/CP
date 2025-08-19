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
int main(){
    fast_io();
    ll n;
    cin>>n;
    vll a(n);
    fori(i,0,n){
        cin>>a[i];
    }
    ll ans=1;
    ll b=1;
    fori(i,1,n){
        if(a[i-1]<=a[i]){
            b++;
             ans=max(b,ans);
        }else{
           
            b=1;
        }
    }
    cout<<ans<<endl;
}