//https://cses.fi/problemset/task/3220

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    long long x,a,b,c;
    cin>>x>>a>>b>>c;
    long long sum=0;
    long long ans=0;
    vector<long long> arr(n);
    arr[0]=1;
    for(int i=1;i<n;i++){
        arr[i]=(a*arr[i-1] +b)%c;
    }
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    ans=sum;
    for(int i=k;k<n;k++){
        sum+=arr[i]-arr[i-k];
        ans=sum^ans;
    }
    cout<<ans<<endl;
    
}