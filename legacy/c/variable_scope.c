#include <stdio.h>
int yep(){
    static int i=0;
    i++;
    return i;
}
int main(){
    for(int i=0;i<10;i++){
        printf("%d\n",yep());
    }
}