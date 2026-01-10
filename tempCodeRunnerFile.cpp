#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t; // Read the number of test cases

	while (t--) {
		int n;
		cin >> n; // Read the length of array a

		// Calculate the size of array b, which is n * (n - 1) / 2
		int m = (n * (n - 1)) / 2;

		vector<int> v(m); // Declare vector v to store array b
		for (int i = 0; i < m; i++)
			cin >> v[i]; // Read the elements of array b

		sort(v.begin(), v.end()); // Sort the array b

		int x = n - 1, i = 0; // Initialize x to n-1 and i to 0

		// Loop to reconstruct array a from sorted array b
		while (x > 0) {
			cout << v[i] << " "; // Output the current element of array a

			i += x; // Move to the next element in sorted array b
			x--; // Decrease x to move to the next group of elements
		}

		cout << "1000000000\n"; // Output a large number to complete array a
	}

	return 0;
}

// Time Complexity (TC): O(m log m)
// Space Complexity (SC): O(m)
