#include<stdio.h>
void printthrufunc(char *string){
    printf("The string passsed to func is %s",string);
}

int main(){
    char a[50];
    printf("Enter a string: ");
    scanf("%s",a);
    printthrufunc(a);
}