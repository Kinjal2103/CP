//https://codeforces.com/problemset/problem/1791/G1

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
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vi a(n);
        fori(i,0,n) cin>>a[i];
        fori(i,0,n) a[i]+=i+1;
        sort(all(a));
        int ans=0;
        fori(i,0,n){
            if(c>=a[i]){
                c-=a[i];
                ans++;
            }else{
                break;
            }
        }
        cout<<ans<<endl;
    }
}