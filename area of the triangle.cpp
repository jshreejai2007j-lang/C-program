#include <stdio.h>
int main() {
	int l,b,h,area;
	printf("enter len of the triangle:");
	scanf("%d",&l);
	printf("enter breath of the triangle:");
	scanf("%d",&b);
	printf("enter height of the triangle:");
	scanf("%d",&h);
	area=l*b*h;
	printf("area of the triangle %d",area);
	return 0;
}