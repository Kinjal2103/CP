//https://cses.fi/problemset/task/1629

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>movies;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        movies.push_back({x,y});
    }
    sort(movies.begin(),movies.end(),[&](auto a,auto b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second<b.second;
    });

    int ans=1;
    int end=movies[0].second;
    for(int i=0;i<n;i++){
        if(end<=movies[i].first){
            ans++;
            end=movies[i].second;
        }
    }
    cout<<ans<<endl;

}
