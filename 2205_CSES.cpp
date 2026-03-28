//https://cses.fi/problemset/task/2205

#include<bits/stdc++.h>
using namespace std;
vector<string> solve(int n){
    if(n==1){
        return {"0","1"};
    }
    vector<string>prev=solve(n-1);
    vector<string> res;
    for(string s: prev){
        res.push_back("0"+s);
    }
    for(int i=prev.size()-1;i>=0;i--){
        res.push_back("1"+prev[i]);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<string> a=solve(n);
    for(string s: a){
        cout<<s<<endl;
    }
}