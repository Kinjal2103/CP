//https://codeforces.com/problemset/problem/1339/B

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
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
};
ll lcm(ll a ,ll b){
    return (a*b)/gcd(a,b);
}
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

    while (t--) {
        int n;
        cin>>n;
        vi a(n);
        fori(i,0,n) cin>>a[i];
        sort(all(a));
        int l=0,r=n-1;
        int i=n-1;
        vi ans(n);
        while(l<=r){
            if(l!=r){
                ans[i--]=a[r];
                r--;
                ans[i--]=a[l];
                l++;
            }else{
                ans[i]=a[l];
                break;
            }
        }
        fori(i,0,n){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
