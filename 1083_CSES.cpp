//https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long needed=1LL*n*(n+1)/2;
    long long sum=0;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    cout<< needed-sum<<endl;
}
