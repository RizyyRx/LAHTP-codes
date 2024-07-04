#include <stdio.h>
int main(){
    int a;
    printf("Enter limit");
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        for(int j=0;j<a-i;j++){
            printf(" ");
        }
        for(int k=i*2-1;k>0;k--){
            printf("*");
        }
        printf("\n");
    } 
}