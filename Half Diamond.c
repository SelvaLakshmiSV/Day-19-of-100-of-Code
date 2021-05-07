#include<stdio.h>
int main()
{
    int row,col,star,spaces,Number;
    printf("Enter the number of columns\n");
    scanf("%d",&Number);
    star = 1;
    spaces = Number -1;
    for(row = 1;row<2*Number;row++){
        for(col = 1;col<=spaces;col++){
            printf("  ");
        }
        for(col = 1;col<=star;col++){
            printf("* ");
        }
        printf("\n");
        if(row<Number){
            star++;
            spaces--;
        }
        else{
            star--;
            spaces++;
        }
    }
    return 0;
}
