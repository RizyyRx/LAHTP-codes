#include <stdio.h>
int main(){
    int a;
    printf("limit\n");
    scanf("%d",&a);
    int s=a-1;
    for(int i=1;i<=a*2;i=i+2){
        for(int k=s;k>0;k--){
            printf(" ");
        }
        s=s-1;
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
