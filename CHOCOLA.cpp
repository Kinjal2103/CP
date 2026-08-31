//https://www.spoj.com/problems/CHOCOLA/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;

        vector<int>x(m-1);
        vector<int>y(n-1);

        for(int i=0;i<m-1;i++){
            cin>>x[i];
        }
        for(int i=0;i<n-1;i++){
            cin>>y[i];
        }

        sort(x.rbegin(),x.rend());
        sort(y.rbegin(),y.rend());

        int i=0,j=0;

        long long ans=0;

        int v=1;
        int h=1;

        while(i<m-1 && j<n-1){
            if(x[i]>=y[j]){
                ans+=1LL*x[i]*h;
                v++;
                i++;
            }else{
                ans+=1LL*y[j]*v;
                h++;
                j++;
            }
        }

        while(i<m-1){
            ans+=1LL*x[i]*h;
            v++;
            i++;
        }

        while(j<n-1){
            ans+=1LL*y[j]*v;
            h++;
            j++;
        }
        cout<<ans<<endl;
    }
}