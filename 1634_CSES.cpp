//https://cses.fi/problemset/task/1634

#include<bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp(x+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(int v:a){
            if(i-v>=0 && dp[i-v]!=INT_MAX) 
                dp[i]=min(dp[i-v]+1,dp[i]);
        }
    }
    if(dp[x]==INT_MAX) cout<<-1<<endl;
    else cout<< dp[x]<<endl;
}
