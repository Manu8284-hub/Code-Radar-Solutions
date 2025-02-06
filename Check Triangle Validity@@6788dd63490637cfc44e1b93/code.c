#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if((a*a)>b+c){
        printf("Valid");
    } else{
        printf("Invalid");
    }
return 0;
}