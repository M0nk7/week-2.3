#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	if (num == 0) printf("= 0");
	else if (num > 0) printf("> 0");
	else printf("< 0");
	return 0;
}
