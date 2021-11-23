#include<iostream>
using namespace std;

int main(void)
{
	string str;
	while(getline(cin, str)){
		int check[4] = {};
		for(auto k : str){
			if('a'<=k && k<='z') check[0]++;
			else if('A'<=k && k<='Z') check[1]++;
			else if(std::isdigit(k) == 1) check[2]++;
			else if(k == ' ') check[3]++;
		}
		for(auto k : check){
			cout << k << " ";
		}
		cout << endl;
	}
}
