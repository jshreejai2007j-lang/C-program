#include <stdio.h>
int main() {
    int n,i,key,pos=-1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);
    for(i=0;i<n;i++)
        if(a[i]==key) pos=i;
    if(pos!=-1) printf("Last occurrence at position %d", pos+1);
    else printf("Key not found");
}