//https://codeforces.com/problemset/problem/2191/C

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
        string s;
        cin>>s;
        int isSorted=1;
        int zeros=0;
        fori(i,0,n-1){
            if(s[i]>s[i+1]){
                isSorted=0;
            }
            if(s[i]=='0'){
                zeros++;
            }
        }
        if(s[n-1]=='0') zeros++;

        if(isSorted){
            cout<<"Bob"<<endl;
            continue;
        }


        vi ans;
        for(int i=0;i<zeros;i++){
            if(s[i]=='1') ans.pb(i+1);
        }
        for(int i=zeros;i<n;i++){
            if(s[i]=='0') ans.pb(i+1);
        }

        cout<<"Alice"<<endl;
        cout<<ans.size()<<endl;
        for(int x: ans) cout<<x<<" ";

        cout<<endl;
    }
}
