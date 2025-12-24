//https://codeforces.com/problemset/problem/1272/B

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
#define rall(x) (x).rbegin(), (x).rend()
#define vmax(v) *max_element(all(v))
#define vmin(v) *min_element(all(v))
#define MOD (ll)(1e9+7)
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

int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> m;
        string t="LRUD";
        for(char c:t) m[c]=0;
        for(char c:s) m[c]++;
        int h=min(m['L'],m['R']);
        int v=min(m['U'],m['D']);
        if(min(v,h)==0){
            if(v==0){
                h=min(h,1);
                cout<<2*h<<endl<<string(h,'L') +string (h,'R')<<endl;
            }else{
                v=min(v,1);
                cout<<2*v<<endl<<string(v,'U') +string (v,'D')<<endl;
            }
        }else{
            string ans;
            ans+=string(h,'L');
            ans += string(v, 'U');
			ans += string(h, 'R');
			ans += string(v, 'D');
			cout << ans.size() << endl << ans << endl;
        }
    }
}