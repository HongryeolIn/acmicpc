#include<iostream>
using namespace std;

int main(void)
{
	int sum = 0;
	for(int i = 0; i<5; i++) {
		int temp;
		cin >> temp;
		sum += temp;
	}
	cout << sum;
}
