//https://codeforces.com/problemset/problem/1913/B

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
        string s;
        cin>>s;
        int z=0,o=0;
        for(char c:s){
            if(c=='0') z++;
            else o++; 
        }
        int l=0;
        for(char c:s){
            if(c=='0' && o>0) {
                o--;
                l++;
            }
            else if(c=='1' && z>0){
                z--;
                l++;
            }
            else break;
        }
        cout<<s.size()-l<<endl;
    }
}