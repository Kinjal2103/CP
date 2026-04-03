//https://cses.fi/problemset/task/1073

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    multiset<int>towers;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        auto it=towers.upper_bound(x);
        if(it==towers.end()){
            towers.insert(x);
        }
        else{
            towers.erase(it);
            towers.insert(x);
        }
    }
    cout<<towers.size()<<endl;
}
