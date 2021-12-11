#include <iostream>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	while(T--) {
		int c, v;
		cin >> c >> v;
		cout << "You get " << c/v << " piece(s) and your dad gets "<< c%v <<" piece(s)." << endl;
	}
}
