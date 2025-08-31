//https://codeforces.com/problemset/problem/1593/B

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
int solve(string n,string s){
    int op=0;
    int sidx=s.size()-1;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]==s[sidx]){
            sidx--;
            if(sidx<0) break;
        }
        else{
            op++;
        }  
    }
    if(sidx>=0){
            op=INT_MAX;
        }
    return op;
}
int main() {
    fast_io();
    int t;
    cin>>t;

    while(t--){
        string n;
        cin>>n;
        vector<string> a={"00","25","75","50"};
        int ans=INT_MAX;
        for(int i=0;i<4;i++){
            ans=min(ans,solve(n,a[i]));
        }
        cout<<ans<<endl;
    }
    
}