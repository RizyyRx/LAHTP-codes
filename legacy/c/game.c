#include<stdio.h>
int arr[8][8];

void print_arr(){
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void place_ter(){
    printf("Each room is filled with terrorists and hostages......\n\n");
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            arr[i][j]=1;
        }
    }
}

void set_row(int row){
    for(int j=1;j<=8;j++){
        arr[row][j]=0;
    }
}

void set_col(int col){
    for(int i=1;i<=8;i++){
        arr[i][col]=0;
    }
}

void count(){
    int result=0;
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            if(arr[i][j]==0){
                result=result+1;
            }
            else{
                continue;
            }
        }
    }
    printf("Total hostages rescued: %d\n",result);
}

void chopper_land(int x,int y){

}

int main(){
    place_ter();
    print_arr();
    printf("\n");
    int x,y;
    int chopper_count;
    printf("How many choppers needed:");
    scanf("%d",&chopper_count);
    for(int i=1;i<=chopper_count;i++){
        printf("Enter the x and y co-ordinates to land chopper %d:\n",i);
        scanf("%d %d",&x,&y);
        printf("\n");
        set_row(x);
        set_col(y);
    }
    printf("Landing successful.......\n\n");
    print_arr();
    printf("\n");
    count();
    printf("\n");
    printf("Mission completed successfully.....Respect +\n");
}