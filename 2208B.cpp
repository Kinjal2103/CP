//https://codeforces.com/problemset/problem/2208/B
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
        int n,k,p,m;
        cin>>n>>k>>p>>m;
        vi a(n);
        fori(i,0,n){
            cin>>a[i];
        }
        p--;
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        deque<pii> v;

        fori(i,0,k){

            if(i == p) pq.push({0,a[i]});
            else pq.push({1,a[i]});
        }
        fori(i,k,n){
            if(i == p) v.pb({0,a[i]});
            else v.pb({1,a[i]});
            
        }

        int ans=0;
        while(!pq.empty()){
            pii t=pq.top();
            pq.pop();
            if(m< t.second){
                break;
            }
            m-=t.second;
            if(t.first==0){
                ans++;
            }
            v.push_back(t);
            if(!v.empty()){
                pq.push(v[0]);
                v.pop_front();
            }
        }
        cout<<ans<<endl;
    }
}