//https://codeforces.com/problemset/problem/550/C

#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>> 
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
const ll INF=-1e18;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
};
#include <iomanip>
void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

bool isSeq(string &s,string &x){
    int i=0;
    for(char c:s){
        if(i<x.size() && c==x[i]){
            i++;
        }
    }
    return (i==x.size());
}
int main(){
    fast_io();
    string s;
    cin>>s;
    for(int i=0;i<1000;i+=8){
        string x=to_string(i);
        if(isSeq(s,x)){
            yes;
            cout<<i<<endl;
            return 0;
        }
    }
    no;
    
    
}
