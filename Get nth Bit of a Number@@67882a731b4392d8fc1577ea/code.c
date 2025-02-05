#include<stdio.h>
int main(){
    int n;
    scanf("%d %d",&number,&n);
    int bit=(number >> n) &1;
    printf("%d",bit);
    return 0;
}