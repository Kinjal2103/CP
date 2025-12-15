//https://codeforces.com/problemset/problem/2176/C

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
        int n;
        cin>>n;
        vi odd,even;
        fori(i,0,n) {
            int x;
            cin>>x;
            if(x%2) odd.pb(x);
            else even.pb(x);
        }
        sort(rall(even));
        sort(rall(odd));

        int e=even.size();
        int o=odd.size();
        vll b(e+1);
        fori(i,0,e){
            b[i+1]=b[i]+even[i];
        }

        fori(k,1,n+1){
            if(k<=e+1){
                if(o == 0) {
                    cout << 0 << " ";
                    continue;
                }
                cout<<odd[0]+b[k-1]<<" ";
            }
            else{
                int req=max(1,k-e);
                if(req%2==0) req++;
                if(req>k || req>o) {
                    cout<<0<<" ";
                    continue;
                } 
                cout<<odd[0]+b[k-req]<<" ";
            }
        }
        cout <<endl;

    }
}