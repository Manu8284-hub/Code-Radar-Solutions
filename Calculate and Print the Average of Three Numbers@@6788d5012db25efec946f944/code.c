#include<stdio.h>
int main(){
    int a,b,c;
    double average;
    scanf("%d %d %d",&a,&b,&c);
    average=(a+b+c)/3;
    printf("Average: %.lf",average);
    return 0;
}