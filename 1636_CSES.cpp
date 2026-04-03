//https://cses.fi/problemset/task/1636

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
    vector<int> dp(x+1);
    dp[0]=1;
    for(int v:a){
        for(int i=v;i<=x;i++){
            dp[i]=(dp[i-v]+dp[i])%MOD;
        }
    }
    cout<< dp[x]<<endl;
}
