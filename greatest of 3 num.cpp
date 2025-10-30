#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        printf("Max:%d\n",a);
        printf("Min:%d",b);
    }
    else if(b>c){
        printf("Max:%d\n",b);
        printf("Min:%d",c);
    }
     else if(c>a){
        printf("Max:%d\n",c);
        printf("Min:%d",a);
    }
    else{
        printf("Equal");
    }
    return 0;
}
