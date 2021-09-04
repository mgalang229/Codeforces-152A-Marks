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
	// find the smallest value (character in every column) and count the number 
	// of students who got the smallest value (in this case, the highest grade)
	int ans = 0;
	for (int i = 0; i < m; i++) {
		char highest = '9';
		for (int j = 0; j < n; j++) {
			if (a[j][i] < highest) {
				highest = a[j][i];
			}
		}
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (a[j][i] == highest) {
				cnt++;
			}
		}
		ans += (cnt == 1);
	}
	cout << ans << '\n';
	return 0;
}
