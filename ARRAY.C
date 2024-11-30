#include<stdio.h>
int main()
{
int i,j;
int matrix[5][6] ={
 {5,7,2,3,8}, {1,2,3,4,5}
    };
clrscr();
for(i = 0; i <= 5; i++){
for(j = 0; j <= 6; j++){
printf("%d",matrix[i][j]);
printf("\n");
return 0;
}
}
}
int matrix(int mat[5][6],int row,int cols){
for(int i=0;i<row;i++)
{
for(int j=0;i<cols;j++)
{
printf("%d",mat[i][j]);
}
printf("\n");
}
}
return 0;
}
