//https://cses.fi/problemset/task/1628

#include<bits/stdc++.h>
using namespace std;

void generate(vector<long long> &arr,vector<long long> &sums){
    long long n=arr.size();
    for(long long mask=0;mask<(1<<n);mask++){
        long long sum=0;
        for(long long i=0;i<n;i++){
            if(mask & (1<<i)){
                sum+=arr[i];
            }
        }
        sums.push_back(sum);
    }
}
int main(){
    long long n,x;
    cin>>n>>x;
    vector<long long>t(n);
    for(long long i=0;i<n;i++) cin>>t[i];
    vector<long long>leftPart,rightPart;
    for(long long i=0;i<n/2;i++){
        leftPart.push_back(t[i]);
    }
    for(long long i=n/2;i<n;i++){
        rightPart.push_back(t[i]);
    }
    vector<long long>leftSum,rightSum;
    generate(leftPart,leftSum);
    generate(rightPart,rightSum);
    unordered_map<long long,long long> mp;
    for(long long s:rightSum){
        mp[s]++;
    }
    
    long long ans=0;

    for(long long s:leftSum){
        ans+=mp[x-s];
    }
    cout<<ans<<endl;
}