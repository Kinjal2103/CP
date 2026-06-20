//https://codeforces.com/problemset/problem/2232/C2

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

int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int n,x,s;
        cin>>n>>x>>s;
        string u;
        cin>>u;
        multiset<ll>m;
        for(char c:u){
            if(c=='E'){
                auto it=m.upper_bound( 0);
                if(it!=m.end()){
                    ll val=*it;
                    m.erase(it);
                    m.insert(val-1);
                }
            }else if(c=='I'){
                m.insert(s-1);
                if(m.size()>x){
                    m.erase(prev(m.end()));
                }
            }else{
                auto it=m.upper_bound( 0);
                if(it!=m.end()){
                    ll val=*it;
                    m.erase(it);
                    m.insert(val-1);
                    m.insert(s);
                }else{
                    m.insert(s-1);
                }
                if(m.size()>x){
                    m.erase(prev(m.end()));
                }
            }
        }
        ll total=0;
        for(ll x:m){
            total+=x;
        }
        cout<<1LL*m.size()*s-total<<endl;
    }
}
