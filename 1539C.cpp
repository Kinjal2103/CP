//https://codeforces.com/problemset/problem/1539/C

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
#include <iomanip>
void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    fast_io();
    ll n,k,x;
    cin>>n>>k>>x;
    vll a(n+1);
    fori(i,1,n+1) cin>>a[i];
    sort(all(a));
    a[0]=a[1];
    vll d;
    int t=1;
    fori(i,1,n+1){
        if(a[i]-a[i-1]>x){
            t++;
            ll b=a[i]-a[i-1];
            ll c=(b+x-1)/x -1;
            d.push_back(c);
        }
    }   
    sort(all(d));
    fori(i,0,d.size()){
        if(d[i]<=k){
            t--;
            k-=d[i];
        }else{
            break;
        }
    }
    cout<<t<<endl;
}