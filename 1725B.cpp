//https://codeforces.com/problemset/problem/1725/B

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
    int n,d;
    cin>>n>>d;
    vi p(n);
    fori(i,0,n){
        cin>>p[i];
    }
    sort(all(p));
    int ans=0;
    int l=n;
    for(int i=n-1;i>=0;i--){
        int need =d/p[i]+1;
        if(l>=need) {
            ans++;
            l-=need;
        }else{
            break;
        }
    }
    cout<<ans<<endl;
}