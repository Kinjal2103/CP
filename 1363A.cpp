//https://codeforces.com/problemset/problem/1363/A

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

int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a%2) odd++;
            else even++;
        }
        if(!odd) {
            no;
            continue;
        }
        odd--;
        x--;
        int oddTaken=min(x/2,odd/2);
        x-=2*oddTaken;
        if(even>=x){
            yes;
        }else{
            no;
        }
        
    }
}
