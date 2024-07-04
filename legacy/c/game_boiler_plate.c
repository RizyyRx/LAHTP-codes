#include<stdio.h>
int arr[8][8];
void print_arr();
void set_all(int num);

void print_arr(){
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void set_all(int num){
     for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            arr[i][j]=num;
        }
        printf("\n");
    }
}

void set_individual(int row,int col,int num){
    arr[row][col]=num;
}

void set_row(int row,int num){
    for(int j=1;j<=8;j++){
        arr[row][j]=num;
    }
}

void set_col(int col,int num){
    for(int i=1;i<=8;i++){
        arr[i][col]=num;
    }
}


int main(){
    set_col(2,4);
    print_arr();
    
}