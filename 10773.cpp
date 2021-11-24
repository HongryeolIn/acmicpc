#include<iostream>
#include<stack>
using namespace std;

int main(void)
{
	int T , ans = 0;
	cin >> T;
	stack<int> is;
	while(T--){
		int temp;
		cin >> temp;
		
		if(temp == 0) {
			is.pop();
			continue;
		}
		is.push(temp);
	}
	while(!is.empty()){
		ans += is.top();
		is.pop();
	}
	cout << ans << endl;
}
