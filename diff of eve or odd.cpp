#include <stdio.h>
int main() {
	int a,b,diff;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter a number:");
	scanf("%d",&b);
	diff=a-b;
	if(a%2==0)
	printf("even");
	else
	printf("odd");
	return 0;
}