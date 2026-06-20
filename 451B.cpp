//https://codeforces.com/problemset/problem/451/B

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
    int n;
    cin>>n;
    vi a(n);
    fori(i,0,n) cin>>a[i];
    vi b=a;
    sort(all(b));
    int l=0,r=n-1;
    while(l<n && a[l]==b[l]) l++;

    if(l==n){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    while(r>=0 && a[r]==b[r]) r--;
    reverse(a.begin()+l,a.begin()+r+1);
    if(a==b){
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<r+1<<endl;
    }else{
        cout<<"no"<<endl;
    }

    
}
