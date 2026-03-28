//https://cses.fi/problemset/task/2217

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>pos(n+1);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        pos[x]=i;
    }
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        swap(pos[x],pos[y]);
        int ans=1;
        for(int i=2;i<=n;i++){
            if(pos[i]<pos[i-1]) ans++;
        }
        cout<<ans<<endl;
        swap(pos[x],pos[y]);
    }

}