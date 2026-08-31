//https://www.spoj.com/problems/AGGRCOW/
#include<bits/stdc++.h>
using namespace std;

bool isPoss(vector<int>&a,int c,int mid){
    int cows=1;
    int last=a[0];
    for(int i=0;i<a.size();i++){
        if(a[i]-last>=mid){
            cows++;
            last=a[i];
        }
        if(cows>=c) return true;  
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a.begin(),a.end());
        int l=0,h=a[n-1]-a[0];

        int ans=0;
        while(l<=h){
            int mid=(l+h)/2;
            if(isPoss(a,c,mid)){
                ans=mid;
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}