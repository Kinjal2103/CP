//https://codeforces.com/problemset/problem/1504/B

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
        string a,b;
        cin>>a>>b;
         vector<bool> canFlip(n, false);

        int count0 = 0, count1 = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == '0') count0++;
            else count1++;
            if (count0 == count1) canFlip[i] = true;
        }

        bool isFlipped = false;
        bool isPoss = true;

        for (int i = n - 1; i >= 0; i--) {
            if (!isFlipped) {
                if (a[i] != b[i]) {
                    if (canFlip[i]) isFlipped = !isFlipped;
                    else {
                        isPoss = false;
                        break;
                    }
                }
            } else {
                if (a[i] == b[i]) {
                    if (canFlip[i]) isFlipped = !isFlipped;
                    else {
                        isPoss = false;
                        break;
                    }
                }
            }
        }

        cout << (isPoss ? "YES\n" : "NO\n");
    }
}
