#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int check_pass(char *password);
int one_upper(char c);
int three_lower(char c);
int one_symbol(char c);
int three_num(char c);

int check_pass(char *password){
    int x=0;   
    int y=0;
    int z=0;
    int w=0;
    int v=0;
    int u=0;
    int s=1;
    int rank=0;
    char arr[10];
    char a[strlen(password)+1];
    strcpy(a,password);
    printf("The pass is %s\n",a);
    if(strlen(password)<8){
        printf("The password has only %ld characters\n",strlen(password));
        printf("Password strength rating(0-9) = 0");
    }
    else{
        printf("The password has %ld characters\n",strlen(password));
        rank=rank+1;
    }
        
    for(int i=0;i<strlen(password);i++){
        if(one_upper(password[i])){
            x=x+1;
        }

        else if(three_lower(password[i])){
            y=y+1;
        }

        else if(one_symbol(password[i])){
            z=z+1;
        }
        else if(three_num(password[i])){
            v=v+1;
        }
    }

    if(v>=3){
        printf("your password has %d numeric characters\n",v);
        for(int j=0;j<strlen(password)-1;j++){
            for(int k=0;k<1;k++){
                if(password[j]>=48 && password[j]<=57){
                    if(password[j]-password[s]==-1){
                        printf("The numbers are sequential\n");
                        printf("sequential numbers are %d and %d\n",password[j],password[s]);
                    }
                    else{
                        printf("The numbers are not sequential\n");
                        printf("The numbers are %d and %d\n",password[j],password[s]);
                    }
                }
                s=s+1;
            }
        }
        rank=rank+2;
    }
    else{
        printf("Your password has only %d numeric character\n",v);
    }

    printf("The val of x is %d\n",x);
    printf("The val of y is %d\n",y);
    printf("The val of z is %d\n",z);
    printf("The val of v is %d\n",v);

    if(x>=1){
        printf("your password has %d uppercase character\n",x);
        rank=rank+1;
    }
    else{
        printf("Your password has no uppercase character\n");
    }

    if(y>=3){
        printf("your password has %d lowercase character\n",y);
        rank=rank+1;
    }
    else{
        printf("Your password has only %d lowercase character\n",y);
    }

    if(z>=1){
        printf("your password has %d symbol\n",z);
        rank=rank+4;
    }
    else{
        printf("Your password has no symbols\n");
    }
    printf("Password strength rating(0-9) = %d\n",rank);

    if(rank=0){
        printf("Your password is very weak\n");
    }
    else if(rank>=1 && rank<=3){
        printf("Your password is weak\n");
    }
    else if(rank>=4 && rank<=6){
        printf("Your password is strong\n");
    }
    else if(rank>=7 && rank<=9){
        printf("Your password is very strong\n");
    }

}

int one_upper(char c){
    
    if(c>=65 && c<=90){ 
        return 1;
    }
    else{
        return 0;
    }
}

int three_lower(char c){
    if(c>=97 && c<=122){
        return 1;
    }
    else{
        return 0;
    }
}

int one_symbol(char c){
    if(c>=32 && c<=47){
        return 1;
    }
    else if(c>=58 && c<=64){
        return 1;
    }
    else if(c>=91 && c<=96){
        return 1;
    }
    else if(c>=123 && c<=126){
        return 1;
    }
    else{ 
        return 0;
    }
}

int three_num(char c){
    if(c>=48 && c<=57){
        return 1;
    }
    else{
       return 0;
    }
}

int main(){
    printf("Enter a password(mininum 8 characters):");
    char str[20];
    scanf("%s",str);
    check_pass(str);
}