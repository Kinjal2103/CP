//https://cses.fi/problemset/task/1618

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long ans=0;
    long long d=5;
    while(n/d>0){
        ans+=n/d;
        d*=5;
    }
    cout<<ans<<endl;
}