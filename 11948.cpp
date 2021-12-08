#include<iostream>
using namespace std;

int main(void)
{
	int arr[6], sum = 0;
	int min1 = 100, min2 = 100;
	for(int i = 0; i<6 ;i++) {
		cin >> arr[i];
		if(arr[i] < min1 && i < 4) min1 = arr[i];
		if(arr[i] < min2 && i >= 4) min2 = arr[i];
	}
	for(auto item : arr) {
		sum += item;
	}
	sum -= min1+min2;
	cout << sum << endl;
}
