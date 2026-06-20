//https://codeforces.com/problemset/problem/2230/C

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
        vi c(n);
        fori(i,0,n){
            cin>>c[i];
        }

        ll notones=0;
        ll ans=0;
        ll ones=0;
        ll poss=0;
        ll sum=0;
        fori(i,0,n){
            sum+=c[i];
            if(c[i]==1){
                ones++;
            }else{
                notones++;
                ans+=c[i];
                poss+=c[i]/2-1;
            }
        }
        if(sum<3){
            cout<<0<<endl;
            continue;
        }
        
        if(notones==1){
            ans+=min(ones,poss+1);
        }
        else{
            ans+=min(ones,poss);
        }
        cout<<ans<<endl;
    }
}
