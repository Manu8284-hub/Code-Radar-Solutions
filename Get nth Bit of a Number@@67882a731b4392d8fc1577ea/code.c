#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int bit=(number>>n)&1;
    printf("%d",bit);
    return 0;
}