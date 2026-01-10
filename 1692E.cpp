//https://codeforces.com/problemset/problem/1692/E

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
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
};
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
        int n,s;
        cin>>n>>s;
        int ans=-1;
        vi a(n);
        fori(i,0,n) {
            cin>>a[i];
        }
        map<int,int> mp;
        mp[0]=-1;
        int sum=0;
        fori(i,0,n){
            sum+=a[i];
            if(mp.count(sum-s)){
                ans=max(ans,i-mp[sum-s]);
            }
            if(!mp.count(sum)){
                mp[sum]=i;
            }
        }
        if(ans==-1){
            cout<<ans<<endl;
        }else{
            cout<<n-ans<<endl;
        }

    }
}
