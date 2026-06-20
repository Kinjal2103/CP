//https://codeforces.com/problemset/problem/1352/B

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
        ll n,k;
        cin>>n>>k;
        if(n>=k && (n-k)%2==0){
            yes;
            for(int i=0;i<k-1;i++){
                cout<<1<<" ";
            }
            cout<<n-(k-1)<<endl;
        }else if(n>=2*k && n%2==0){
            yes;
            for(int i=0;i<k-1;i++){
                cout<<2<<" ";
            }
            cout<<n-2*(k-1)<<endl;
        }else{
            no;
        }

    }
}
