#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n=s.size();
        cout<<min(n,2)*n - max(0,n-2)<<endl;
    }
}