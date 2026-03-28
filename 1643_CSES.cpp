//https://cses.fi/problemset/task/1643

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long ans=INT_MIN;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum=max(sum+a[i],a[i]);
        ans=max(ans,sum);
    }
    cout<<ans<<endl;

}