//https://codeforces.com/problemset/problem/1926/C

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
#include <iomanip>
void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
long long digitSum(long long x){
    long long s = 0;
    while (x){
        s += x % 10;
        x /= 10;
    }
    return s;
}
int main(){
    const int MAX = 200'007;
    fast_io();
    vector<long long> pref(MAX+1);

    for(int i = 1; i <= MAX; i++){
        pref[i] = pref[i-1] + digitSum(i);
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << pref[n] << "\n";
    }
}