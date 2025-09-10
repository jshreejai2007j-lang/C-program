#include<stdio.h>
int main(){
	int a,lastdigit;
	scanf("%d",&a);
	lastdigit=a%10;
	printf("the lastdigit of the given number is%d",lastdigit);
	return 0;
}