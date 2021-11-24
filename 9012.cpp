#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	int T;
	cin >> T;
	
	while (T--) {
		string input;
		cin >> input;

		stack<char> st;
		string answer = "YES";
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '(') {
				st.push(input[i]);
			}
			else if (!st.empty() && input[i] == ')' && st.top() == '(') {
				st.pop();
			}
			else {
				answer = "NO";
				break;
			}
		}
		if (!st.empty()) answer = "NO";
		cout << answer << endl;
	}
	return 0;
}
