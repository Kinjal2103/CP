//https://cses.fi/problemset/task/1072

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++){
        cout<< max(0LL,(i*i)*(i*i-1)/2  - (i-1)*(i-2)*4)<<endl;
    }

}