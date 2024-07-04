#include<stdio.h>
int add(int *nums,int count){
    int result=0;
    for(int i=0;i<count;i++){
        result=nums[i]+result;
    }
    return result;
}

int main(){
    int a[]={1,2,3,4,5};
    int b=add(a,sizeof(a)/4);
    printf("added ans is %d\n",b);
}