#include <stdio.h>
int main(){
    char a[100];
    printf("Enter string:\n");
    scanf("%s",a);
    printf("The string is %s\n",a);
    for(int i=0;i<10;i++){
        printf("a[%d] = %c at address %p\n",i,a[i],&a[i]);
    }
}