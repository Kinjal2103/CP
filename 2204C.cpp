//https://codeforces.com/problemset/problem/2204/C
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

ll lcm(ll a, ll b){
    return a / __gcd(a,b) * b;
}

void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main() {
    fast_io();
    int t;
    cin>>t;

    while(t--){
        ll a,b,c,m;
        cin>>a>>b>>c>>m;

        ll ab=lcm(a,b);
        ll ac=lcm(a,c);
        ll cb=lcm(b,c);

        ll abc=lcm(a,cb);
        ll A=m/a;
        ll B=m/b;
        ll C=m/c;

        ll AB=m/ab;
        ll AC=m/ac;
        ll CB=m/cb;

        ll ABC=m/abc;

        a=A-AB-AC+ABC;
        b=B-AB-CB+ABC;
        c=C-AC-CB+ABC;

        ab=AB-ABC;
        ac=AC-ABC;
        cb=CB-ABC;

        ll al=6*a +3*(ab+ac) +2*ABC;
        ll bob=6*b +3*(ab+cb) +2*ABC;
        ll car=6*c +3*(cb+ac) +2*ABC;

        cout<<al<<" "<<bob<<" "<<car<<endl;
    }
}