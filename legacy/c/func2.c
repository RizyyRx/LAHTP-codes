#include <stdio.h>
int even(int num);

int even(int num){
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    int result;
    while(1){
        printf("Enter a number(0 to exit):");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        result=even(n);
        printf("The value of result is %d\n",result);

        if(result){
            printf("Its an even number\n");
        }
        else{
            printf("Not even number\n");
        }
    }
    printf("Quitted......\n");
}

