#include<iostream>
using namespace std;

int main(void)
{
	int num;
	cin >> num;
	while(num--){
		for(int i = num; i>=0 ;i--) {
			cout << "*";
		}
		cout << endl;
	}
}
