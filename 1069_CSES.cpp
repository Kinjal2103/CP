//https://cses.fi/problemset/task/1069

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int ans=1;
    int c=1;
    for(int i=1;i<s.length();i++){
        if(s[i-1]==s[i]){
            c++;
        }else{
            ans=max(ans,c);
            c=1;
        }
    }
    ans=max(ans,c);
    cout<<ans<<endl;
}