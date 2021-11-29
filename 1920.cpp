#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> iv;

int bSearch(int front, int back, int target) {
	if(front > back) {
		return 0;
	}
	else {
		int mid = (front + back) / 2;
		if(iv[mid] == target) {
			return 1;
		}
		else if (iv[mid] > target) {
			return bSearch(front, mid-1, target);
		}
		else return bSearch(mid+1, back, target);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 속도 향상 위해
	
	int N;
	cin >> N;
	for(int i = 0; i<N ;i++){
		int temp;
		cin >> temp;
		iv.push_back(temp);
	}
	sort(iv.begin(), iv.end());
	int M;
	cin >> M;
	while(M--) {
		int temp;
		cin >> temp;
		cout << bSearch(0, N-1, temp) << "\n";
	}
}
