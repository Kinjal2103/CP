//https://codeforces.com/problemset/problem/1326/B

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
    int n;
    cin>>n;
    vi b(n);
    fori(i,0,n){
        cin>>b[i];
    }
    vi a(n);
    a[0]=b[0];
    int mx=a[0];
    fori(i,1,n){
        a[i]=b[i]+mx;
        mx=max(mx,a[i]);
    }
    fori(i,0,n){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}