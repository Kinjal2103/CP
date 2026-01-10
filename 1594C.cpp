//https://codeforces.com/problemset/problem/1594/C

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
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        vector<int>ans;
        bool ok = true;
        for(auto x:s){
            if(x != c){
                ok = false;
            }
        }

        if(ok) {
            cout<<0<<endl;
            continue;
        }

        int val=-1;
        for(int i=2;i<=n;i++){
            bool isPoss=true;
            for(int j=i;j<=n;j+=i){
                if(s[j-1]!=c){
                    isPoss=false;
                    break;
                }
            }

            if(isPoss){
                val=i;
                break;
            }
        }
        if(val!=-1){
            cout<<1<<endl;
            cout<<val<<endl;
            continue;
        }
        cout<<2<<endl;
        cout<<n-1 <<" "<<n <<endl;
        
    }
}