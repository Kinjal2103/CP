
//https://codeforces.com/problemset/problem/2176/B
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0;
        fori(i,0,n){
            if(s[i]=='1') a++;
        }
        if(a==n){
            cout<<0<<endl;
            continue;
        }
        string ss=s+s;
        int ans=0;
        int g=0;

        for(int i=0;i<2*n;i++){
            if(ss[i]=='0'){
                g++;
            }
            else{
                ans=max(ans,g);
                g=0;
            }
        }
        ans=max(g,ans);
        cout<<ans<<endl;   
    }
}