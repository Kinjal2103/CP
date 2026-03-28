//https://cses.fi/problemset/task/1074

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    int med=p[n/2];
    long long cost=0;
    for(int i=0;i<n;i++){
        cost+=abs(p[i]-med);
    }
    cout<<cost<<endl;

}