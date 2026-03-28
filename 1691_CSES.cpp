//https://cses.fi/problemset/task/1691

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,1});
        v.push_back({y,-1});
    }
    sort(v.begin(),v.end());
    int sum=0;
    int ans=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i].second;
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
}