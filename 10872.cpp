#include<iostream>
using namespace std;

int main(void)
{
	int n, sum = 1;
	cin >> n;
	if ( n == 0 ) {
		cout << "1" << endl;
		return 0;
	}
	for(int i = 1; i<=n ;i++){
			sum *= i;
	}
	cout << sum;
}
