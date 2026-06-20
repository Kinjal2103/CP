//https://codeforces.com/problemset/problem/476/B

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
    string s1,s2;
    cin>>s1>>s2;
    int p1=0,p2=0,n1=0,n2=0;
    for(char c:s1){
        if(c=='+') p1++;
        if(c=='-') n1++;
    }
    for(char c:s2){
        if(c=='+') p2++;
        if(c=='-') n2++;
    }
    double ans=1;
    int n=s2.size()-p2-n2;

    int target=p1-n1;
    int curr=p2-n2;
    int need=target-curr;

    if((need+n)%2){
        cout<<fixed<<setprecision(12)<<0.0<<endl;
        return 0;
    }
    int x=(need+n)/2;
    if(x<0 || x>n){
        cout<<fixed<<setprecision(12)<<0.0<<endl;
        return 0;
    }
    for(int i=1;i<=x;i++){
        ans*=(n-i+1);
        ans/=i;
    }
    ans=ans/pow(2.0,n);
    cout<<fixed<<setprecision(12)<<ans<<endl;

}
