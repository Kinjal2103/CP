//https://cses.fi/problemset/task/1163/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>x>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    set<int>pos;
    multiset<int>gaps;
    pos.insert(0);
    pos.insert(x);

    gaps.insert(x);
    for(int i=0;i<n;i++){
        int curr=p[i];
        auto right=pos.upper_bound(curr);
        auto left=prev(right);
        int r=*right;
        int l=*left;
        gaps.erase(gaps.find(r-l));
        gaps.insert(curr-l);
        gaps.insert(r-curr);

        pos.insert(curr);
        cout<<*gaps.rbegin()<<" ";
    }

}