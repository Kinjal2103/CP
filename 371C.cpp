//https://codeforces.com/problemset/problem/371/C

#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>> 
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
const ll INF=-1e18;
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
ll nb,ns,nc,pb,ps,pc,r;
ll needb=0,needs=0,needc=0;
bool poss(ll x){
    ll reqs=needs*x;
    ll reqb=needb*x;
    ll reqc=needc*x;
    ll cost=0;
    cost+=ps*max(0LL,reqs-ns);
    cost+=pc*max(0LL,reqc-nc);
    cost+=pb*max(0LL,reqb-nb);
    return cost<=r;
}
int main(){
    fast_io();
    string s;
    cin>>s;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;

    for(char c:s){
        if(c=='B') needb++;
        else if(c=='S') needs++;
        else needc++;
    }
    ll l=0,r=1e13;
    ll ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(poss(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;

}
