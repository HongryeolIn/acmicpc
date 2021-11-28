#include<iostream>
using namespace std;


int main(void)
{
	int fibo[46] = {0, 1};
	for(int i = 2; i<46 ;i++) {
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	int n;
	cin >> n;
	cout << fibo[n] << endl; 
}
