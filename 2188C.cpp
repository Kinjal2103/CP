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
bool isValid(int mid,vector<int>&a,vector<int>&b,int mn,int mx){
    for(int i=0;i<a.size();i++){
        if(abs(a[i]-mn)<mid && abs(mx-a[i])<mid){
            if(a[i]!=b[i]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    fast_io();
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        fori(i,0,n) cin>>a[i];

        int isAscending=1;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                isAscending=0;
                break;
            }
        }
        if(isAscending){
            cout<<-1<<endl;
            continue;
        }
        vi b=a;
        sort(all(b));
        int mx=vmax(a);
        int mn=vmin(a);
        int l=0,r=1000000000;
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isValid(mid,a,b,mn,mx)){
                l=mid+1;
                ans=mid;
            }else{
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    
}
