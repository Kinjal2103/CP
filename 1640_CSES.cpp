//https://cses.fi/problemset/task/1640

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back({x,i});
    }
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    vector<int>ans;
    while(l<r){
        if(a[l].first+a[r].first<x){
            l++;
        }else if((a[l].first+a[r].first)==x){
            ans.push_back(a[l].second+1);
            ans.push_back(a[r].second+1);
            break;
        }else{
            r--;
        }
    }
    if(ans.empty()) cout<<"IMPOSSIBLE"<<endl;
    else cout<<ans[0]<<" "<<ans[1]<<endl;

}