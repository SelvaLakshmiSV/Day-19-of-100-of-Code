#include<stdio.h>
int main()
{   int row,col;
    int number;
    printf("Enter the number of rows/columns :\n");
    scanf("%d",&number);
    for(row = 1;row<=number;row++,printf("\n")){
        for(col = row;col<number;col++){
            printf("  ");
        }
        for(col = 1;col<=(2*row-1);col++){
            if(row==number||col==1||col==(2*row-1))
             printf("* ");
            else
             printf("  ");

        }
    }
    return 0;
}
