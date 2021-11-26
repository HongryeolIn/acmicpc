#include<iostream>
using namespace std;

int main(void)
{
    int T, H, W, N;
    int F, R; 
    cin >> T;
    while(T--) {
        cin >> H >> W >> N; //H:Ãþ W:¹æ N:¼Õ´Ô¼ø¼­
    	if (N%H == 0) {
			F = H;
			R = N/H;
		}
		else {
			F = N%H;
			R = N/H+1;
		}
		cout << F*100 + R << endl;
    }
}
