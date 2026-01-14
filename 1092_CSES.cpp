//https://cses.fi/problemset/task/1092

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> l,r;
    long long lsum=0,rsum=0;
    for(int i=n;i>=1;i--){
        if(lsum<=rsum){
            lsum+=i;
            l.push_back(i);
        }else{
            rsum+=i;
            r.push_back(i);
        }
    }
    if(lsum!=rsum){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        cout<<l.size()<<endl;
        for(int i=0;i<l.size();i++) cout<<l[i]<<" ";
        cout<<endl;
        cout<<r.size()<<endl;
        for(int i=0;i<r.size();i++) cout<<r[i]<<" ";
        cout<<endl;
    }
    

}