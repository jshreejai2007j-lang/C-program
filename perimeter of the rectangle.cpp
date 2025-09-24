#include <stdio.h>
int main() {
	int l,b,perimeter;
	printf("enter len of the rectangle:");
	scanf("%d",&l);
	printf("enter breath of the rectangle:");
	scanf("%d",&b);
	perimeter=2*(l+b);
	printf("perimeter of the rectangle %d",perimeter);
	return 0;
}