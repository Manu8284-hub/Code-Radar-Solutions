// Your code here...
#include<stdio.h>
void bubble(int arr[],int n){
    for(int i=0;i<n-1; i++){
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[i]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf(arr[i]," ");
       
    }
    printf(" ");
}
int main(){
    int n=5;
    int arr[]={4,1,5,2,3};
    bubble(arr,n);
    printarray(arr,n);
    return 0;
}