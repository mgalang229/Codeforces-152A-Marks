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
	// for every grade of a student, check if the grades of at least one (1) student
	// is higher than the said student's grade
	// if yes, then it means that the said student didn't got the highest grade in a certain subject
	// only consider the said student successful, if the grade is the highest or one of the highest in a subject
	int ans = 0;
	for (int i = 0; i < n; i++) {
		bool was_best = false;
		for (int j = 0; j < m; j++) {
			int is_best = true;
			for (int k = 0; k < n; k++) {
				if (a[k][j] > a[i][j]) {
					is_best = false;
				}
			}
			if (is_best) {
				was_best = true;
			}
		}
		if (was_best) {
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}
