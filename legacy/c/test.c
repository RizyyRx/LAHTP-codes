#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    printf("%p\n",&a);
    for(int i=0;i<10;i++){
        printf("a[%d]=%d\n",i+1,a[i]);
        printf("a[%d]=%d\n",i+1,*(a+i));
    }

}