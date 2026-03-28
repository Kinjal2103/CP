//https://codeforces.com/problemset/problem/2204/E

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
int digit_sum(long long x){
    int s = 0;
    while(x){
        s += x % 10;
        x /= 10;
    }
    return s;
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
        string s;
        cin >> s;

        sort(s.begin(), s.end(), greater<char>());

        long long x = stoll(s);
        string ans = "";

        while(true){
            ans += to_string(x);
            if(x <= 9) break;
            x = digit_sum(x);
        }

        cout << ans << "\n";

    }   
}

 