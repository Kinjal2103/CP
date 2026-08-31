//https://codeforces.com/problemset/problem/276/B

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
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(char c:s ){
        mp[c]++;
    }
    int odd=0;
    for(auto &[c,f]:mp){
        if(f%2){
            odd++;
        }
    }
    if(!odd){
        cout<<"First"<<endl;
    }else{
        odd--;
        if(odd%2==0){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }

    
}
