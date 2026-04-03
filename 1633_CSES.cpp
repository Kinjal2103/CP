//https://cses.fi/problemset/task/1633

#include<bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;
int main(){
    int n;
    cin>>n;
    
    vector<int> dp(n+1);
    dp[0]=1;
    for(int t=1;t<=n;t++){
        for(int i=1;i<=6;i++){
            if(t-i>=0) dp[t]=(dp[t]+dp[t-i])%MOD;
        }
    }
    cout<< dp[n]<<endl;
}
