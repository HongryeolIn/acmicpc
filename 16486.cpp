#include<iostream>
#define PI 3.141592
using namespace std;

int main(void)
{
	double d1, d2;
	cin >> d1 >> d2;
	printf("%.6lf\n", d1*2 + 2*PI*d2);
	return 0;
}
