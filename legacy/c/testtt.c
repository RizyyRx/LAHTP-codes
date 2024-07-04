#include <stdio.h>
int main(){
    int n,remainder=0,m;
    printf("enter n");
    scanf("%d",&n);
    while(1){
        remainder=(n%7);
        n=remainder;
        if(remainder<7){
            break;
        }
        else{
            continue;
        }
    }
    printf("%d\n",remainder);
}