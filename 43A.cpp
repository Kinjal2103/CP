//https://codeforces.com/problemset/problem/43/A

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
    map<string,int>s;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        s[a]++;
    }
    string ans;
    int mx=0;
    for(auto &it:s ){
        if(it.second>mx){
            mx=it.second;
            ans=it.first;
        }
    }
    cout<<ans<<endl;
    
}
