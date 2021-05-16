#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void reverse_string(char* str);
int main() {
	char str1[30] = "";
	printf("배열str1주소=%d,str[0]=%d\n",str1,str1[0]);
	puts("문자열?");
	gets_s(str1, sizeof(str1));
	
	puts("역순으로 된 문자열:");
	reverse_string(str1);

	

	



}

void reverse_string(char* str) {
	

	for (int i = strlen(str); i >=0; i--) {
		printf("%c", str[i]);
		if (i == 0)
			printf("\n");

	}
	printf("포인터str의주소=%d,data=%d\n", &str, str);
	
}