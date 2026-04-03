//https://codeforces.com/problemset/problem/2211/C

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
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
};
ll lcm(ll a ,ll b){
    return (a*b)/gcd(a,b);
}
#include <iomanip>
void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
const int MODc=676767677;
int main(){
    fast_io();
    
    int t;
    cin>>t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vi a(n), b(n);
        fori(i,0,n) cin>>a[i];
        fori(i,0,n) cin>>b[i];

        int poss = 1;

        
            for(int i=0;i<n;i++){
                if(i<n-k || i>=k){
                    if(b[i]!=-1 && a[i]!=b[i]){
                        poss=0;
                        break;
                    }
                }
            }

            if(poss){
                unordered_map<int,int> freq;
                fori(i,n-k,k){
                    freq[a[i]]++;
                }
                fori(i,n-k,k){
                    if(b[i]!=-1){
                        freq[b[i]]--;
                        if(freq[b[i]] < 0){
                            poss=0;
                            break;
                        }
                    }
                }
            }
        

        if(poss) yes;
        else no;
    }
}
