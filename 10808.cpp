#include<iostream>
using namespace std;

int main(void)
{
	string str;
	int count[26] = {};
	cin >> str;
	for(int i = 0; i<str.size();i++){
		count[str[i]-'a']++;
	}
	for(auto k : count){
		cout << k << " ";
	}
}
