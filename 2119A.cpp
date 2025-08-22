//https://codeforces.com/problemset/problem/2119/A
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

void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main() {
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
 
        if(a%2!=0 && b<a-1 || a%2==0 && b<a){
            cout<<"-1"<<endl;
        }
        else{
            if(a%2!=0 && b==a-1 ){
                cout<<y<<endl;
            }
            else if(x<=y || b==a) 
                cout<<(b-a)*x<<endl;
            else{
                int ans=0;
                int i=a;
                while(i<b){
                    if(i%2!=0)
                        ans+=x;
                    else   
                        ans+=y;
                    i++;
                }
                cout<<ans<<endl;
            }
        }
    }
}