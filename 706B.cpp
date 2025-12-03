//https://codeforces.com/problemset/problem/706/B

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
    int n;
    cin>>n;
    vi x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int q;
    cin>>q;
    vi a(q);
    fori(i,0,q){
        cin>>a[i];
    }
    sort(all(x));
    for(int i=0;i<q;i++){
        int count = upper_bound(x.begin(), x.end(), a[i]) - x.begin();
        cout<<count<<endl;
    }
    
}