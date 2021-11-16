#include <iostream>
using namespace std;

int main(void)
{
	int min = 100, sum = 0;
	int temp;
	for(int i = 0; i<7; i++){
		cin >> temp;
		if(temp%2 != 0) {
			sum += temp;
			if(min > temp) min = temp;
		}
	}
	if( sum == 0) {
		cout << "-1" << endl;
		return 0;
	}
	cout << sum << endl << min << endl;
}
