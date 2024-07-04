#include<stdio.h>
#include<unistd.h>
int main(){
    char *pass;
    pass=getpass("Enter a string:");
    printf("Password:%s\n",pass);
}