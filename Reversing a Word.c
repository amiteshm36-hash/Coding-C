#include<stdio.h>
int main (){
	char str[50];
	printf("Enter the Word");
	gets(str);
	printf("The Given Word is %s\n",str);
	printf("After Reversing the Word is %s\n ",strrev(str));
	return 0;
}
