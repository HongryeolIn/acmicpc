#include<iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	while(N--) {
		string temp;
		cin >> temp;
		cout << (temp[temp.length()-1]%2 == 0 ?  "even\n" : "odd\n");
	}
}
