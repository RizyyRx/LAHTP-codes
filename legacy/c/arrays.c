#include <stdio.h>
int main(){
    int a[10],b=1;
    for(int j=0;j<10;j++){
        a[j]=b;
        b=b+1;
    }
    for(int i=0;i<10;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
}