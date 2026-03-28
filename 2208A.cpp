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
        vector<vector<int>>grid(n,vector<int> (n));
        unordered_map<int,int> freq;
        fori(i,0,n){
            fori(j,0,n){
                cin>>grid[i][j];
                freq[grid[i][j]]++;
            }
        }
        if(n==1){
            no;
            continue;
        }
        int poss=1;
        for(auto & p:freq){
            if(p.second> n*(n-1)){
                poss=0;
                break;
            }
        }
        if(poss) yes;
        else no;

    }
}