#include<stdio.h>
int main(){
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if(a&2)
	printf("even");
	else
	printf("odd");
	return 0;
}  