#include<bits/stdc++.h>
using namespace std;

int main(){
    
        int n,l;
        cin>>n>>l;

        
        unordered_map<int,int>pos;
        int curr=0;
        pos[curr]++;
        for(int i=0;i<n-1;i++){
            int x;
            cin>>x;
            curr=(curr+x)%l;
            pos[curr]++;
        }
        if(l%3){
            cout<<0<<endl;
            return 0;
        }
        int d=l/3;
        int ans=0;
        for(int i=0;i<d;i++){
            ans+=pos[i]*pos[i+d]*pos[i+2*d];
        }
        cout<<ans<<endl;
    

}