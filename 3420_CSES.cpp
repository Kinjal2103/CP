//https://cses.fi/problemset/task/3420
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    long long ans=0;
    int l=0;
    unordered_map<int,int>freq;
    for(int r=0;r<n;r++){
        freq[x[r]]++;
        while(freq[x[r]]>1){
            freq[x[l++]]--;
        }
        ans+=r-l+1;
    }
    cout<<ans<<endl;
}