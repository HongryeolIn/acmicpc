#include<iostream>
using namespace std;

int ans(int k, int n){
	if(n == 1) return 1;
	if(k == 0) return n;
	return ans(k-1, n) + ans(k, n-1);
}

int main(void)
{
	int T, k, n;
	cin >> T;
	while(T--) {
		cin >> k >> n;
		cout << ans(k, n) << endl;
	}
}
