//https://codeforces.com/problemset/problem/1691/B

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
#define vmax(v) *max_element(all(v))
#define vmin(v) *min_element(all(v))
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
        vi a(n);
        fori(i,0,n) cin>>a[i];
        map<int,int>mp;
        fori(i,0,n) mp[a[i]]++;
        int k=0;

        for(auto &it: mp){
            if(it.second==1){
                k=1;
                break;
            }
        }
        if(k){
            cout<<-1<<endl;
            continue;
        }
        vi s(n);
        fori(i,0,n) s[i]=i+1;

        int l=0,r=0;
        while(r<n){
            if(a[l]==a[r]){
                r++;
            }else{
                rotate(s.begin()+l,s.begin()+l+1,s.begin()+r);
                l=r;
            }
        }
        rotate(s.begin()+l,s.begin()+l+1,s.begin()+r);
        fori(i,0,n) cout<<s[i]<<" ";
        cout<<endl;
    }
}