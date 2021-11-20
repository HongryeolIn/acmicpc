#include<iostream>
using namespace std;

int main(void)
{
	int x, y, w, h, ans;
	cin >> x >> y >> w >> h;
	x = (x < w-x) ? x : w-x;
	y = (y < h-y) ? y : h-y;
	ans = x < y ? x : y;
	cout << ans;
}
