//https://codeforces.com/problemset/problem/1666/D
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
    ll n;
    cin>>n;

    while(n--){
        string s,t;
        cin>>s>>t;
        vi freq(26,0);
        int ss=s.size();
        int st=t.size();
        for(int i=0;i<st;i++){
            freq[t[i]-'A']++;
        }
        vi a(ss);
        for(int i=ss-1;i>=0;i--){
            if(freq[s[i]-'A']>0) {
                freq[s[i]-'A']--;
                a[i]=1;
            }
        }
        string f="";
        for(int i=0;i<ss;i++){
            if(a[i]) f+=s[i];
        }
        if(f==t) yes;
        else no;
    }
}