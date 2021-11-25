#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	while(true) {
		string temp;
		cin >> temp;
		if(temp == "0") break;
		string temp2 = temp;
		reverse(temp2.begin(), temp2.end());
		if(temp == temp2) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}
