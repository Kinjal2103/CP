//https://codeforces.com/problemset/problem/1914/D

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
        vi a(n),b(n),c(n);
        vi index_a(n),index_b(n),index_c(n);
        fori(i,0,n){
            cin>>a[i];
            index_a[i]=i;
        }
        fori(i,0,n){
            cin>>b[i];
            index_b[i]=i;
        }
        fori(i,0,n){
            cin>>c[i];
            index_c[i]=i;
        }
        sort(all(index_a),[&](auto &x,auto &y){
            return a[x]>a[y];
        });
        sort(all(index_b),[&](auto &x,auto &y){
            return b[x]>b[y];
        });
        sort(all(index_c),[&](auto &x,auto &y){
            return c[x]>c[y];
        });
        int ans=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    int x=index_a[i], y=index_b[j] ,z=index_c[k];
                    if(x==y || y==z || z==x){
                        continue;
                    }
                    ans=max(ans,a[x]+b[y]+c[z]);
                }
            }
        }
        cout<<ans<<endl;
    }
}