#include <iostream>
using namespace std;

int main(void)
{
	int num, check[2] = {};
	int input;
	cin >> num;
	while(num--){
		cin >> input;
		check[input]++;
	}
	if(check[0]>check[1]){
		cout << "Junhee is not cute!" << endl;
	} else {
		cout << "Junhee is cute!" << endl;
	}
}
