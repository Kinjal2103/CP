//https://cses.fi/problemset/task/2183

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    long long res=1;
    sort(x.begin(),x.end());
    for(int i=0;i<n;i++){
        if(x[i]>res) break;
        res+=x[i];
    }
    cout<<res<<endl;
}