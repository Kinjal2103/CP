//https://codeforces.com/contest/2128/problem/B
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
        int n;
        cin>>n;
        vi p(n);
        fori(i,0,n){
            cin>>p[i];
        }
        int j=0;
        string ans="";
        fori(i,0,n/2){
            if(j%2){
                if(p[i]<p[n-1-i]){
                    ans+="RL";
                }else{
                    ans+="LR";
                }
                j++;
            }else{
                if(p[i]>p[n-1-i]){
                    ans+="RL";
                }else{
                    ans+="LR";
                }
                j++;
            }
        }
        if(ans.size()!=n) ans+="L";
        cout<<ans<<endl;
    }
}
