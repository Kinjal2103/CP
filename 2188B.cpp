//https://codeforces.com/problemset/problem/2188/B

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

int main(){
    fast_io();
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        int ones=0;
        for(char c:s){
            if(c=='1')ones++;
        }
        if(ones==0){
            cout<<(n+2)/3<<endl;
            continue;
        }
        int l=0,r=n-1;
        while(l<n){
            if(s[l]=='0') l++;
            else break;
        }
        while(r>=0){
            if(s[r]=='0') r--;
            else break;
        }
        int add=0;
        add+=(l+1)/3;
        add+=(n-r)/3;
        int j=l;
        for(int i=l+1;i<n;i++){
            if(s[i]=='1'){
                int g=i-j-1;
                add+=g/3;
                j=i;
            }
        }
        cout<<ones+add<<"\n";
    }
    
}
