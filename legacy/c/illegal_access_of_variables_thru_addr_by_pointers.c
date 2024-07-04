#include <stdio.h>
int x=50;
int z=52;
int summa(){
    int a;
    a=10;
    printf("Val of a is %d\n",a);
    printf("addr of a is %p\n",&a);
}
int main(){
    static int y=51;
    int *p=&y;
    int b = 20;
    printf("Val of b is %d\n",b);
    printf("addr of b is %p\n",&b);
    int c = 30;
    printf("Val of c is %d\n",c);
    printf("addr of c is %p\n",&c);
    summa();
    printf("Val of x is %d\n",x);
    printf("addr of x is %p\n",&x);
    printf("Val of z is %d\n",z);
    printf("addr of z is %p\n",&z);
    
    printf("Val of y is %d\n",y);
    printf("addr of y is %p\n",&y);

    printf("The val that p refers to is %d\n",*p);
    printf("Val of p is %p\n",p);
    printf("addr of p is %p\n",&p);
    int *s=&y-0x2;

    printf("Val of y is %d\n",y);
    printf("addr of y is %p\n",&y);

    printf("The val that s refers to is %d\n",*s);
    printf("Val of s is %p\n",s);
    printf("addr of s is %p\n",&s);
}