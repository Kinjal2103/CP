//https://codeforces.com/problemset/problem/1362/A

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
        ll a,b;
        cin>>a>>b;
        ll x=max(a,b);
        ll y=min(a,b);
        if(x%y!=0){
            cout<<-1<<endl;
            continue;
        }
        ll c=x/y;
        if(c==1){
            cout<<0<<endl;
            continue;
        }
        ll ans=1;
        int k=1;
        while(c!=2 && c!=4 && c!=8){
            if(c%8==0){
                c=c/8;
            }else if(c%4==0){
                c=c/4;
            }else if(c%2==0){
                c=c/2;
            }else{
                k=0;
                break;
            }
            ans++;
        }
        if(k) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
}