#include <stdio.h>
int main(){
    char a[]="1234567890";

    for(int i=0;i<=sizeof(a);i++){
        printf("a[%d] = %c stored in %p\n",i,a[i],&a[i]);
    }

    printf("%s\n",a);
}