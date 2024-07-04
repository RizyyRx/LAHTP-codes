#include<stdio.h>
#include"pass_check.c"
int main(int argc,char *argv[]){
    if(argc==2){
        printf("%d\n",pass_check(argv[1]));
    }
    else{
        printf("usage:%s password\n",argv[0]);
    }
}