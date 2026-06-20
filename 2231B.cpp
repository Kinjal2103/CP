//https://codeforces.com/problemset/problem/2231/B

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
        vll a(n);
        fori(i,0,n) cin>>a[i];
        int poss=1;
        fori(i,2,n){
            if(a[i-2]>a[i-1] && a[i-1]>a[i]){
                poss=0;
                break;
            }
        }
        if(!poss){
            no;
            continue;
        }
        ll mn=1;
        for(int i=0;i<n-1;i++){
            mn=max(mn,a[i]-a[i+1]);
        }
        int ok1=1;
        int ok2=1;
        for(int i=0;i<n-1;i++){
            int c1=0,c2=0;
            if(ok1 && a[i]<=a[i+1]){
                c1=1;
            }
            if(ok1 && a[i]<=a[i+1]+mn){
                c2=1;
            }
            if(ok2 && a[i]+mn<=a[i+1]){
                c1=1;
            }if(ok2 && a[i]<=a[i+1]){
                c2=1;
            }
            ok1=c1;
            ok2=c2;
        }
        if(ok1 || ok2){
            yes;
        }else{
            no;
        }
        
    }
}
