//https://codeforces.com/problemset/problem/489/C

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
    int m,s;
    cin>>m>>s;
    if((s==0 && m>1) || s>9*m){
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    if(m==1 && s==0){
        cout<<0<<" "<<0<<endl;
        return 0;
    }
    string mx="",mn="";
    int sum=s;
    for(int i=0;i<m;i++){
        int d=min(9,sum);
        sum-=d;
        mx+=char('0'+d);
    }
    sum=s;
    vi digits(m);
    sum--;
    for(int i=m-1;i>=1;i--){
        int d=min(9,sum);
        sum-=d;
        digits[i]=d;
    }
    digits[0]=sum+1;
    for(int d:digits){
        mn+=char('0'+d);
    }
    cout<<mn<<" "<<mx<<endl;
    
}
