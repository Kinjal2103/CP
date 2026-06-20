//https://codeforces.com/problemset/problem/977/C

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
    int n,k;
    cin>>n>>k;
    vi a(n);
    fori(i,0,n) cin>>a[i];

    sort(all(a));
    if(k==0){
        if(a[0]==1){
            cout<<-1<<endl;
        }
        else cout<<a[0]-1<<endl;
        return 0;
    }
    if(k<n && a[k-1]==a[k]){
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<a[k-1]<<endl;
       
    
}
