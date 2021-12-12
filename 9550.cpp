#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int T;
	vector<int> v;
	cin >> T;
	while(T--) {
		int N, K;
		cin >> N >> K;
		while(N--) {
			int temp;
			cin >> temp;
			v.push_back(temp);
		}
		int ans = 0;
		for(auto item : v) {
			ans += item/K;
		}
		cout << ans << endl;
		v.clear();
	}
}
