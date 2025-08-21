//https://codeforces.com/contest/2132/problem/0
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
        int n,m;
        string a,b,c;
        cin>>n>>a>>m>>b>>c;
        string ans="";
        deque<char> d;
        for (char ch : a) 
            d.push_back(ch);
        fori(i,0,m){
            if(c[i]=='V') d.push_front(b[i]);
            else d.push_back(b[i]);
        }
        while(!d.empty()){
            ans+=d.front();
            d.pop_front();
        }
        cout<<ans<<endl;
    }
}