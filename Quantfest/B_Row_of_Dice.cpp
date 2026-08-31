#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long double>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long double ans=0;
    for(int i=n-1;i>=1;i--){
        long double exp=(a[i]+1)/2.0;
        long long val=(long long)floor(exp);
        long double sum=0;
        for(int j=i-1;j>=0;j--){
            if(a[j]<exp) continue;
            sum+=(val*exp+((a[j]-val)*(val+1+a[j]))/2.0)/a[j];
            break;
        }
        ans=max(ans,sum);
    }
    cout<<setprecision(10)<<ans<<endl;
}