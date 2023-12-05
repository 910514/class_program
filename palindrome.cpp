#include<stdio.h>
#include<string.h>
int main(){
	int len = 0, i, ans;
	char str[100], restr[100];
	printf("Enter a string: ");
	gets(str);
	len = strlen(str);
	for(i=0; i<len; i++){
		restr[i] = str[len-1-i];
	}
	ans = strcmp(str, restr);
	if(ans != 0)
		printf("不是回文") ;
	else
		printf("回文");
	return 0;
}
