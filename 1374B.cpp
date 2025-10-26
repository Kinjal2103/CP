//https://codeforces.com/problemset/problem/1374/B

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
        int n;
        cin>>n;
        int n2=0;
        int n3=0;
        while(n>0 && n%3==0) {
            n3++;
            n/=3;
        }
        while(n>0 && n%2==0) {
            n2++;
            n/=2;
        }
        if(n>1 || n2>n3) cout<<"-1"<<endl;
        else{
            cout<<n3+(n3-n2)<<endl;
        }
    }
}