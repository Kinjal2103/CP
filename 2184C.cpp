//https://codeforces.com/problemset/problem/2184/C

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
#define fori(i, a, b) for (int i=(a); i < (b); i++)
#define forl(i, a, b) for (long long i=(a); i < (b); i++)
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
int solve(int n,int k){
    return 0;
}
int main(){
    fast_io();
    int t;
    cin>>t;

    while (t--) {
        int n,k;
        cin>>n>>k;
        if(n==k){
            cout<<0<<endl;
            continue;
        }
        queue<int> a;
        a.push(n);
        int ans=0;
        int found=0;

        while (!a.empty()) {
            int sz=a.size();
            ans++;
            set<int> s; 

            while (sz--) {
                int cur=a.front();
                a.pop();
                int x=cur/2;
                int y=cur-x;

                if (x==k || y==k) {
                    found=1;
                    break;
                }

                if (x>k) s.insert(x);
                if (y>k) s.insert(y);
            }

            if (found) {
                cout <<ans<< endl;
                break;
            }

            if (s.empty()) {
                cout <<-1<< endl;
                break;
            }

            for (auto v : s) 
                a.push(v);
        }
    }
}

