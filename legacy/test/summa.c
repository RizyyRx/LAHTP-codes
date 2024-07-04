#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char a[10]={"nikkaaaaaa"};
    char b[strlen(a)+1];
    strcpy(b,a);
    b[0]='g';
    printf("a=%s b=%s\n",a,b);
}