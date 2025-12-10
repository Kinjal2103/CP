//https://codeforces.com/problemset/problem/1418/A

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
long long ceild(long long a, long long b) {
	return (a + b - 1) / b;
}
int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
        ll ans=ceild((k*(y+1)-1),(x-1))+k;
        cout<<ans<<endl;
    }
}