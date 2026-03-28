//https://cses.fi/problemset/task/1141

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    map<int,int>freq;
    int l=0;
    for(int r=0;r<n;r++){
        freq[a[r]]++;
        while(freq[a[r]]>  1){
            freq[a[l]]--;
            l++;
        }
        ans=max(ans,r-l+1);
    }
    cout<<ans<<endl;
}