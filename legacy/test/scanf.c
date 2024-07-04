#include <stdio.h>
int main(){
    char a[10];
    char b[10];
    char c[10];
    printf("Enter string\n");
    scanf("%[^\n]s",a);
    scanf("%s",b);
    scanf("%s",c);

    printf("val of a is %s\n",a);
    printf("val of b is %s\n",b);
    printf("val of c is %s\n",c);
}