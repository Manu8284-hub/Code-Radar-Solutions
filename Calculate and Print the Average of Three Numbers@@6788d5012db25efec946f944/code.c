#include<stdio.h>
int main(){
    int a,b,c;
    double average;
    scanf("%d %d %d",&a,&b,&c);
    average=(a+b+c)/3.0;
    printf("Average: %.lf\n",average);
    return 0;
}