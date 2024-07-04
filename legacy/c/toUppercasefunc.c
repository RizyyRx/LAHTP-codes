#include<stdio.h>
#include<string.h>
void to_upper_case(char *string);
int is_upper(char c);
int is_lower(char c);

void to_upper_case(char *string){
    printf("The string passsed to func is %s\n",string);
    for(int i=0;i<strlen(string);i++){
        if(is_upper(string[i])){
            continue;
        }
        else if(is_lower(string[i])){
            string[i]=string[i]-32;
        }
    }
}

int is_upper(char c){
    if(c>=65 && c<=90){
        return 1;
    }
    else{
        return 0;
    }
}

int is_lower(char c){
    if(c>=97 && c<=122){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char a[50];
    printf("Enter a string: ");
    scanf("%s",a);
    to_upper_case(a);
    printf("converted string is %s\n",a);
}