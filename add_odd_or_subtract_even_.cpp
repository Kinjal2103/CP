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
int main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"0"<<endl;
        }
        else if(b>a){
            if((b-a)%2) cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }else{
            if((a-b)%2) cout<<"2"<<endl;
            else cout<<"1"<<endl;
        }
    }
}