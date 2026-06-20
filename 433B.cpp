//https://codeforces.com/problemset/problem/433/B

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
    int n,m;
    cin>>n;
    vi v(n);
    fori(i,0,n){
        cin>>v[i];
    }
    vll pref(n+1);
    for(int i=0;i<n;i++){
        pref[i+1]=pref[i]+v[i];
    }
    sort(all(v));
    vll pref2(n+1);
    for(int i=0;i<n;i++){
        pref2[i+1]=pref2[i]+v[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1){
            cout<<pref[r]-pref[l-1]<<endl;
        }else{
            cout<<pref2[r]-pref2[l-1]<<endl;
        }
    }

    
}
