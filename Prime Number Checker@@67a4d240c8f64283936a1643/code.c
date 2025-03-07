#include<stdio.h>
int prime(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0){
            return 0;
        } else{
            return 1;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",prime(n));
}