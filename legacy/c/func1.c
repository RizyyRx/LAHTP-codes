#include <stdio.h>
int add(int a,int b, int c);

int add(int a,int b,int c){
    int d=a+b+c;
    return d;
}

int main(){
    int num,a,b,c;
    printf("Enter 3 numbers to add:\n");
    scanf("%d %d %d",&a,&b,&c);
    num=add(a,b,c);
    printf("The result is %d\n",num);
}
