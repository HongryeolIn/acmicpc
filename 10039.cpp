#include<iostream>
using namespace std;

int main(void)
{
	int input, sum = 0;
	
	for(int i = 0; i<5 ;i++){
		cin >> input;
		if(input < 40) input = 40;
		sum += input;	
	}
	cout << sum/5;
}
