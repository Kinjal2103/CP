//https://codeforces.com/problemset/problem/550/A

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
        bool ok = false;

        int t=s.find("AB");
        if(t!=string::npos){
            int v=s.find("BA",t+2);
            if(v!=string::npos){
                yes;
                return 0;
            }
        }

        t=s.find("BA");
        if(t!=string::npos){
            int v=s.find("AB",t+2);
            if(v!=string::npos){
                yes;
                return 0;
            }
        }
        no;
        // int n=s.size();
        // for(int i=0;i<n-1;i++){
        //     if(s.substr(i,2)=="AB"){
        //         for(int j=i+2;j<n-1;j++){
        //             if(s.substr(j,2)=="BA"){
        //                 ok=true;
        //                 break;
        //             }
        //         }
        //     }
        //     if(ok) break;
        // }

        // for(int i=0;i<n-1;i++){
        //     if(s.substr(i,2)=="BA"){
        //         for(int j=i+1;j<n-1;j++){
        //             if(s.substr(j,2)=="AB"){
        //                 ok=true;
        //                 break;
        //             }
        //         }
        //     }
        //     if(ok) break;
        // }

        // if(ok) yes;
        // else no;
    
}
