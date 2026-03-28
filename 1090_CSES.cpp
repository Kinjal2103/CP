//https://cses.fi/problemset/task/1090

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int ans=0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    while(l<=r){
        if(a[l]+a[r]<=x){
            l++;
        }
        r--;
        ans++;
    }
    
    cout<<ans<<endl;
}