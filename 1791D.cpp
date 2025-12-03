//https://codeforces.com/problemset/problem/1791/D

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
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_set<char> st;
        vi a(n+1),b(n+1);
        fori(i,1,n+1){
            st.insert(s[i-1]);
            a[i]=st.size();
        }
        st.clear();
        for(int i=n;i>=1;i--){
            st.insert(s[i-1]);
            b[i]=st.size();
        }
        int ans=0;
        fori(i,0,n){
            ans=max(ans,a[i]+b[i+1]);
        }
        cout<<ans<<endl;
    }
}