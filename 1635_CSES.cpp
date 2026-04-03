//https://cses.fi/problemset/task/1635

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
    for(int i=1;i<=x;i++){
        for(int v:a){
            if(i-v>=0) dp[i]=(dp[i-v]+dp[i])%MOD;
        }
    }
    cout<< dp[x]<<endl;
}
