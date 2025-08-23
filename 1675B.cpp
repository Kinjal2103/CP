//https://codeforces.com/problemset/problem/1675/B
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
        int ans=0;
        int n;
        cin>>n;
        vi a(n);
        int k=-1;
        fori(i,0,n){
            cin>>a[i];
        }
    
        int p=1;
        for(int i=n-2;i>=0;i--){
            while(a[i] && a[i]>=a[i+1]){
                ans++;
                a[i]/=2;
                
            }
            if(a[i] == 0 && a[i] >= a[i+1]){
                p=0;
                break;
            }
        }
        if(p) cout<<ans<<endl;
        else cout<<-1<<endl;
        
    }
}