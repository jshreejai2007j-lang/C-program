#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,d;
 printf("enter a num:");
 scanf("%d",&a);
 printf("enter a num:");
 scanf("%d",&b);
 printf("enter a num:");
 scanf("%d",&c);
 printf("enter a num:");
 scanf("%d",&d);
 double e=sqrt((a-c)*(a-c)+(b-d)*(b-d));
 printf("the distance between two points is %.2lf",e);
 return 0;
 
 }