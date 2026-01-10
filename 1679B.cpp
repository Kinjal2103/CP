//https://codeforces.com/problemset/problem/1679/B

#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define pb push_back
#define pob pop_back
#define fori(i, a, b) for (int i = (a); i < (b); i++)
#define forl(i, a, b) for (long long i = (a); i < (b); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vmax(v) *max_element(all(v))
#define vmin(v) *min_element(all(v))
#define MOD (ll)(1e9+7)
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
};
#include <iomanip>
void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    fast_io();
    
    
        int n,q;
        cin>>n>>q;
        vector<pair<int, int>> v(n, {0, 0});
        for (int i = 0; i < n; i++){
		    cin >> v[i].first;
	    }
        pair<int, int> globalVal = {0, -1};

        long long sum = 0;
	    for (int i = 0; i < n; i++) 
		    sum += v[i].first;

        for (int it = 1; it <= q; it++){
		    int x;
		    cin >> x;

		    if (x == 1){
                int ind, val;
                cin >> ind >> val;

                ind--;

                if (v[ind].second > globalVal.second){
                    sum += (val - v[ind].first);
                }
                else{
                    sum += (val - globalVal.first);
                }

                v[ind].first = val;
                v[ind].second = it;
		    }
		    else{
                int val;
                cin >> val;

                globalVal.first = val;
                globalVal.second = it;

                sum = (long long)(val) * n;
		    }
            cout << sum << "\n"; 
        }
		
    
}
