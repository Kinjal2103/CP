//https://cses.fi/problemset/task/1746

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    const long long MOD= 1e9+7;
    cin>>n>>m;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<vector<long long>>dp(n,vector<long long>(m+2));
    if(a[0]==0){
        for(int i=1;i<=m;i++){
            dp[0][i]=1;
        }
    }else{
        dp[0][a[0]]=1;
    }
    for(int i=1;i<n;i++){
        for(int v=1;v<=m;v++){
            if(a[i]!=0 && a[i]!=v) continue;
            dp[i][v]=(dp[i-1][v]+dp[i-1][v-1]+dp[i-1][v+1])%MOD;
        }
    }
    int ans = 0;
    for (int v = 1; v <= m; v++) {
        ans = (ans + dp[n-1][v]) % MOD;
    }

    cout << ans << endl;
}