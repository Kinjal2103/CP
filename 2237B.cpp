//https://codeforces.com/problemset/problem/2237/B

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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vll a(n),b(n);
        fori(i,0,n) cin>>a[i];
        fori(i,0,n) cin>>b[i];

        vi lb;
        int poss=1;
        for(int i=0;i<n;i++){
            int p=lower_bound(b.begin(),b.end(),a[i])-b.begin();
            if(p==n){
                poss=0;
                break;
            }
            lb.push_back(p);
        }
        if(!poss){
            cout<<-1<<endl;
            continue;
        }
        vi ord;
        vi used(n);
        for(int p=0;p<n;p++){
            int choosen=-1;
            for(int i=0;i<n;i++){
                if(!used[i] && lb[i]<=p){
                    choosen=i;
                    break;
                }
            }
            if(choosen==-1){
                poss=0;
                break;
            }
            ord.pb(choosen);
            used[choosen]=1;
        }
        if(!poss){
            cout<<-1<<endl;
            continue;
        }
        vector<int>curr;
        for(int i=0;i<n;i++) curr.pb(i);
        ll ans=0;
        for(int i=0;i<n;i++){
            int need=ord[i];
            int idx=i;
            while(curr[idx]!=need) idx++;
            while(idx>i){
                swap(curr[idx],curr[idx-1]);
                ans++;
                idx--;
            }
        }
        cout<<ans<<endl;
    }

}
