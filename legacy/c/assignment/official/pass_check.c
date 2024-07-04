#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
int pass_check(char *password);
int pass_len(char *password);
int one_upper(char *password);
int three_lower(char *password);
int one_symbol(char *password);
int three_num(char *password);
int num_notseq(char *password);

int pass_check(char *password){
    int score=0;
    score=score+pass_len(password);
    if(score==0){
        goto here;
    }
    score=score+one_upper(password);
    score=score+three_lower(password);
    score=score+one_symbol(password);
    score=score+three_num(password);
    score=score+num_notseq(password);
    here:
    return score;
}

/*
    *Returns a score 1 for password length if conditions satisfy
*/
int pass_len(char *password){
    if(strlen(password)<8){
        return 0;
    }
    else{
        return 1;
    }
}
/*
    *Checks if the password has atleast one uppercase character
    *returns 1 if condition satisfies
*/
int one_upper(char *password){
    for(int i=0;i<strlen(password);i++){
        if(isupper(password[i])){
            return 1;         
        }
    }
    return 0;
}

/*
    *Checks if the password has atleast 3 lowercase characters
    *returns 1 if condition satisfies
*/
int three_lower(char *password){
    int count=0;
    for(int i=0;i<strlen(password);i++){
        if(islower(password[i])){
            count++;         
        }
        if(count>=3){
            return 1;
        }
    }
    return 0;
}

/*
    *Checks if the password has atleast one symbol character
    *returns 1 if condition satisfies
*/
int one_symbol(char *password){
    for(int i=0;i<strlen(password);i++){
        if(ispunct(password[i])){
            return 1;         
        }
    }
    return 0;
}

/*
    *Checks if the password has atleast three numeric characters.
    *returns 1 if condition satisfies.
*/
int three_num(char *password){
    int count=0;
    for(int i=0;i<strlen(password);i++){
        if(isdigit(password[i])){
            count++;
        }
    }
    if(count>=3){
        return 1;
    }
    else{
        return 0;
    }
}
/*
    *Checks if the numbers are sequential or not.
    *If sequential, returns score 2
    *If not sequential, returns score 4
*/

int num_notseq(char *password){
    int count=0;
    for(int i=0;i<strlen(password);i++){
        if(isdigit(password[i])){
            count++;
        }
    }
    if(count>=3){
        for(int i=0;i<strlen(password)-2;i++){  /*i<strlen(password)-2 because lets say we enter a 10 digit 
                                                 password,the loop will iterate one by one. Now when it reaches
                                                 the 10th char, the condition we used i.e password[i+1] or
                                                 password [i+2] will access 11th and 12th unwanted data.
                                                 To prevent this, we negate -2 so that the data access will
                                                 be in the limit of the password string only.
                                                 */
            if(isdigit(password[i]) && isdigit(password[i+1]) && isdigit(password[i+2])){
                int n1=password[i];
                int n2=password[i+1];
                int n3=password[i+2];
                if(abs(n2-n1)==1 && abs(n3-n2)==1){
                    return 0;
                }
                else{
                    return 4;
                }
            }   
        }
    }
    return 0;
}        