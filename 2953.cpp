#include<iostream>
using namespace std;

int main(void)
{
	int order, max = -1;
	for(int i = 1; i<=5 ;i++) {
		int temp, sum = 0;
		for(int j = 0; j<4 ;j++) {
			cin >> temp;
			sum += temp;
		}
		if(max < sum){
			max = sum;
			order = i;
		}
	}
	cout << order << " " << max << endl;
}
