//https://codeforces.com/problemset/problem/1380/A

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
        vi a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int st=0,end=n-1;
        int ans=-1;
        for (int i = 2; i <= n - 1; i++) {
            if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
                ans = i;
                break;
            }
        }
        if(ans!=-1){
            yes;
            cout <<ans-1 << " " << ans  << " " << ans + 1 << endl;
        }
        else no;
    }
}