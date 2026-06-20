//https://codeforces.com/problemset/problem/2233/C

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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vi open,closed;
        fori(i,0,n){
            if(s[i]=='(') open.pb(i);
            else closed.pb(i);
        }
        int l=open.size();
        int r=closed.size();
        int c=INT_MAX;
        string ans;

        int delO=min(k,l);
        int delC=max(0,k-r);
        
        for(int a=delC ;a<=delO;a++){
            int b=k-a;
            string m(n,'0');
            fori(i,0,a){
                m[open[i]]='1';
            }fori(i,0,b){
                m[closed[r-1-i]]='1';
            }
            int bal=0;
            int cost=0;
            fori(i,0,n){
                if(m[i]=='1') continue;
                if(s[i]=='(') bal++;
                else {
                    if(bal>0){
                        bal--;
                        cost++;
                    }
                }
            }
            if(cost<c){
                c=cost;
                ans=m;
            }
        }
        cout<<ans<<endl;
    }
}
