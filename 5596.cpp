#include<iostream>
using namespace std;

int main(void)
{
	int minkook = 0, mansae = 0;
	for(int i = 0; i<4 ;i++) {
		int temp;
		cin >> temp;
		minkook += temp;
	}
	for(int i = 0; i<4 ;i++) {
		int temp;
		cin >> temp;
		mansae += temp;
	}
	cout << ((minkook >= mansae) ?  minkook : mansae);
}
