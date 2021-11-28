#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(string s1, string s2){
	if(s1.length() != s2.length())
		return s1.length() < s2.length();
	else
		return s1 < s2;
}

int main(void)
{
	int T;
	cin >> T;
	vector<string> sv;
	while(T--){
		string temp;
		cin >> temp;
		sv.push_back(temp);
	}
	sort(sv.begin(), sv.end(), comp);
	string temp;
	for(auto item : sv) {
		if(item == temp) continue;
		cout << item << endl;
		temp = item;
	}
	return 0;
}
