#include<iostream>
using namespace std;

int main(void)
{
	char before[26];
	char after[26];
	for(int i = 0; i<26 ;i++){
		before[i] = i+'A';
		if(i<23) after[i] = i+'D';
		else after[i] = i+42;
	}
	string str;
	cin >> str;
	for(int i = 0; i<str.size(); i++){
		for(int j = 0; j<26; j++){
			if(str[i] == after[j]){
				str[i] = before[j];
				break;
			}
		}
	}
	cout << str;
}
