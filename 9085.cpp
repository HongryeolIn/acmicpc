#include<iostream>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	while(T--) {
		int N, ans = 0;
		cin >> N;
		while(N--) {
			int temp;
			cin >> temp;
			ans += temp;
		}
		cout << ans << endl;
	}
}
