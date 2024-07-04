#include<stdio.h>
int main(){
    char a[7]="nigga1";
    char b[7]="nigga2";
    char c[7]="nigga3";

    for(int i=0;i<sizeof(a);i++){
        printf("a[%d] = %c stored in %p\n",i,a[i],&a[i]);
    }
    for(int i=0;i<sizeof(b);i++){
        printf("b[%d] = %c stored in %p\n",i,b[i],&b[i]);
    }
    for(int i=0;i<sizeof(c);i++){
        printf("c[%d] = %c stored in %p\n",i,c[i],&c[i]);
    }

    printf("a:%s\n",a);
    printf("b:%s\n",b);
    printf("c:%s\n",c);
}