//https://codeforces.com/problemset/problem/1793/C

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


bool isMinOrMax(int val, set<int> &s){
	if ((*s.begin()) == val)
		return true;

	if ((*s.rbegin()) == val)
		return true;

	return false;
} 

int main(){
    fast_io();
	int t;
	cin >> t;

	while (t--){
		int n;
		cin >> n; 

		vector<int> arr(n);

		for (int i = 0; i < n; i++)
			cin >> arr[i]; 

		set<int> s(arr.begin(), arr.end()); 
		int i = 0, j = n - 1; 

		while (i < j)
		{
			if (isMinOrMax(arr[i], s)) {
				s.erase(arr[i]);
				i++;
				continue;
			}

			if (isMinOrMax(arr[j], s)) {
				s.erase(arr[j]); 
				j--;
				continue;
			}

			break;
		} 

		if (i < j){
			cout << (i + 1) << " " << (j + 1) << "\n";
		}
		else{
			cout << "-1\n";
		}
	}

	return 0;
}

