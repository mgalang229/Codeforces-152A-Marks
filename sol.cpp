#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	// use 'char' data type since digits doesn't have space between them
	char a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	// create a boolean array to mark the successful students
	bool visited[n] = {false};
	for (int i = 0; i < m; i++) {
		// find the highest grade of a particular subject and verify whether the i-th 
		// student got this grade (if yes, then mark the i-th index using the boolean array)
		int highest = a[0][i];
		for (int j = 1; j < n; j++) {
			if (a[j][i] > highest) {
				highest = a[j][i];
			}
		}
		for (int j = 0; j < n; j++) {
			if (a[j][i] == highest) {
				visited[j] = true;
			}
		}
	}
	// count the number of successful students
	cout << count(visited, visited + n, true) << '\n';
	return 0;
}
