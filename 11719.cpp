#include <iostream>
using namespace std;

int main() {
    string str;
    string ans;
    getline(cin, str);
    for(int i = 0; i < str.size() ;i++){
    	if('A' <= str[i]&&str[i] <= 'Z') ans.push_back(str[i]);
	}
	if(ans[0] == 'U' && ans[1] == 'C' && ans[2] == 'P' && ans[3] == 'C')
		cout << "I love UCPC" << endl;
	else cout << "I hate UCPC" << endl;
}
