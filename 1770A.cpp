//https://codeforces.com/problemset/problem/1770/A

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
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vi a(n);
        vi b(m);
        priority_queue<int, vector<int>, greater<int>> pq;
        fori(i,0,n){
            cin>>a[i];
            pq.push(a[i]);
        }
        fori(i,0,m){
            cin>>b[i];
            pq.pop();
            pq.push(b[i]);
        }
        long long ans=0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        cout<<ans<<endl;
    }
}