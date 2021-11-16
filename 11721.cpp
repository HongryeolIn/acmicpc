#include<iostream>
using namespace std;

int main(void)
{
	string str;
	cin >> str;
	int n = 0;
	for(auto k : str){
		cout << k;
		n++;
		if(n%10==0) cout << endl;
	}
}
