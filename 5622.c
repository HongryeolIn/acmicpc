#include<stdio.h>
#include<string.h>

int main(void) {
	char str[16];
	int arr[26]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	int sum = 0;
	scanf("%s",str);
	for(int i = 0;i<strlen(str);i++){
		sum += arr[str[i]-'A'];
	}
		
	printf("%d\n",sum);
	return 0;
}
