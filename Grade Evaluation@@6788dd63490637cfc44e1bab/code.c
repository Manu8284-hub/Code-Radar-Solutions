#include<stdio.h>
int main(){
    char e;
    scanf("%c",&e);
    if(e=='A'){
        printf("Excellent");
    } else if(e=='B'){
        printf("Good");
    } else if(e=='C'){
        printf("Average");
    } else if(e=='D'){
        printf("Below Average");
    } else if(e=='F'){
        printf("Fail");
    } else{
        printf("Invalid grade");
    }
return 0;
}