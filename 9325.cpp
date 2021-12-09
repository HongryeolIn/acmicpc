#include<iostream>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	while(T--) {
		int carPrice, sum = 0;
		cin >> carPrice;
		sum += carPrice;
		int N;
		cin >> N;
		while(N--) {
			int q, p;
			cin >> q >> p;
			sum += q*p;
		}
		cout << sum << endl;
	}
}
