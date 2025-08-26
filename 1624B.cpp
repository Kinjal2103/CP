//https://codeforces.com/problemset/problem/1624/B
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

void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main() {
    fast_io();
    int t;
    cin>>t;

    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        ll na=2*b-c;
        if(na/a>0 && na%a==0) ans=1;
        ll nb=(a+c)/2;
        if(nb/b>0 && nb%b==0 && (c-a)%2==0) ans=1;
        ll nc=2*b-a;
        if(nc/c>0 and nc%c==0) ans=1;
        if (ans)yes;
        else no;
    }
}