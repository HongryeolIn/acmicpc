#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	while(1) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if(a == 0 && b == 0 && c == 0 && d == 0) return 0;
		cout << c - b << " " << d - a << endl;
	}
}
