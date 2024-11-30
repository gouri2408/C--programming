#include<stdio.h>
void main(){
int *arr = (int *)calloc(5, sizeof(int));
int i;
clrscr();
if(arr == NULL){
printf("memory allocation failed\n");
return 0;
}
printf("array element after calloc:\n ");
for(i=0; i<5; i++){
printf("%d",arr[i]);
}
free(arr);
}