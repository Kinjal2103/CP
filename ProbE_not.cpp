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

int main() {
    fast_io();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n);
        vll b(n);
        forl(i,0,n){
            cin>>a[i];
        }
        forl(i,0,n){
            cin>>b[i];
        }
        if(a[n-1]!=b[n-1]){
            no;
            continue;
        }
        int ans=1;
        for(ll i=n-2;i>=0;i--){
            int d=a[i]^b[i];
            if(d==0){
                continue;
            }
            else{
                if((d^a[i+1])==0){
                    a[i]=b[i];
                }
                else{
                    ans=0;
                }
            }
            if(!ans) break;
        }
        if(ans) yes;
        else no;
    }
}
