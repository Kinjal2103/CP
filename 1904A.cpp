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
    int t;
    cin>>t;
    while(t--){
        ll a,b,xk,yk,xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;
        set<pair<int,int>>s1,s2;
        vpii dir={{a,b},{a,-b},{-a,-b},{-a,b},{b,a},{-b,a},{-b,-a},{b,-a}};
        for(auto d:dir){
            int x=xk+d.first;
            int y=yk+d.second;
            s1.insert(x,y);
            x=xq+d.first;
            y=yq+d.second;
            s2.insert(x,y);
        }
        int count=0;
        for(auto s:s1){
            if(s2.find(s)!=s2.end())
                count++;
        }
        cout<<count<<endl;
    }
}