//https://codeforces.com/problemset/problem/2208/A
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
        int n;
        cin>>n;
        vector<int>a(n),mx(n);
        int m=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m=max(m,a[i]);
            mx[i]=m;
        }
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]==mx[i]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}