//https://codeforces.com/problemset/problem/2217/D

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
        int n, k;
        cin >> n >> k;
        vi a(n);
        fori(i,0,n) cin >> a[i];
        vi p(k);
        fori(i,0,k) {
            cin >> p[i];
            p[i]--; 
        }

        int x = a[p[0]]; 
        int ans = 0;
        int pl=0;
        int pr=k-1;
        int st=0;
        int end=n-1;
        while(st<=end){
            int l=0;
            int posl=p[pl];
            int exp=x;
            for (int i=st;i<posl;i++) {
                if (a[i]!=exp) 
                    l++;
                exp=a[i];
            }
            int r=0;
            exp=x;
            int posr=p[pr];
            for (int i=end; i>posr; i--) {
                if (a[i]!=exp) 
                    r++;
                exp=a[i];
            }
            int v=max(r,l);;
            if(v%2){
                v++;
            }
            ans+=v;
            st=posl+1;
            end=posr-1;
            pl++;
            pr--;
        }
        

        cout << ans << "\n";
    }
}
