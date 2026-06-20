//https://codeforces.com/problemset/problem/2228/D

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

ll ans,a,n;
vector<int>d;
string s;

bool valid(int digit,int l){
    return !(l>1 && digit==0);
}

string dfsGreater(int i,bool bigger){
    int sz=s.size();
    if(i==sz){
        return "";
    }
    int cur=s[i]-'0';
    for(int x:d){
        if(i==0 && !valid(x,sz))
            continue;

        if(!bigger && x<cur)
            continue;

        bool b=bigger||(x>cur);
        string next=dfsGreater(i+1,b);

        if(next!="#"){
            return char('0'+x)+next;
        }
    }
    return "#";
}

string buildGreater(){
    int sz=s.size();
    string res=dfsGreater(0,false);

    if(res!="#"){
        return res;
    }
    int first = d[0];
    if (first == 0 && n > 1) {
        first = d[1]; 
    }
    if (first == 0) return "0";
    string ans(1,char('0'+first));
    for(int i=0;i<sz;i++){
        ans+=char('0'+d[0]);
    }
    return ans;
}

string dfsSmaller(int i,bool smaller){
    int sz=s.size();
    if(i==sz){
        return "";
    }
    int cur=s[i]-'0';

    for(int j=n-1;j>=0;j--){
        int x=d[j];
        if(i==0 && !valid(x,sz))
            continue;
        if(!smaller && x>cur)
            continue;
        bool b=smaller||(x<cur);
        string next=dfsSmaller(i+1,b);
        if(next!="#"){
            return char('0'+x)+next;
        }
    }
    return "#";
}

string buildSmaller(){
    int sz=s.size();
    string res=dfsSmaller(0,false);

    if(res!="#"){
        return res;
    }
    if(sz==1){
        return "#";
    }
    return string(sz-1,char('0'+d.back()));
}

ll toNum(string s){
    ll x=0;
    for(char c:s){
        x=x*10+(c-'0');
    }
    return x;
}

int main(){
    fast_io();

    int t;
    cin>>t;

    while(t--){
        cin>>a>>n;
        d.resize(n);
        for(int i=0;i<n;i++)
            cin>>d[i];

        ans=LLONG_MAX;
        s=to_string(a);

        string greater=buildGreater();
        string small=buildSmaller();

        ans = toNum(greater) - a;

        if (small!="#") {
            ans = min(ans,a-toNum(small));
        }
        cout<<ans<<endl;
    }
}