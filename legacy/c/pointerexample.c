#include <stdio.h>
int main(){
    int a=10;
    int *b=&a;

    printf("The value of a is %d stored in address %p\n",a,&a);
    printf("The value of *b is %p stored in address %p refers to %d\n",b,&b,*b);
    
    
}