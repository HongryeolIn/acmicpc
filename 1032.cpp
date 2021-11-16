#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	string ans;
	string* file = new string[N];
	for (int i = 0; i < N; i++) {
		cin >> file[i];
	}
	ans = file[0];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < file[0].size(); j++) {
			if(ans[j] != file[i][j]) ans[j] = '?';
		}
	}

	cout << ans;
	return 0;
}
