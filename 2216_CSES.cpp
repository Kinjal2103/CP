//https://cses.fi/problemset/task/2216

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    int ans=1;

    for(int i=1;i<n;i++){
        if(v[i].second<v[i-1].second) ans++;
    }
    cout<<ans<<endl;
}