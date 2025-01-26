#include<stdio.h>
int main(){
    int a;
    unsigned int msb_mask=1<<31;
    scanf("%d",&a);
    if(a & msb_mask){
        printf("Set");
    }else{
        printf("Not set");
    }
return 0;
}