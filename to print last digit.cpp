#include<stdio.h>
int main(){
	int n,lastdigit;
	scanf("%d",&n);
	lastdigit=n%10;
	printf("lastdigit: %d",lastdigit);
	return 0;
}