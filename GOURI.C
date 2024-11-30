#include<stdio.h>
void main(){
    char str[100];
    int i = 0;
    printf("enter a string");
    gets(str);
    while(str[i]!='\0')
    {
    if(str[i] == ' '){
    str[i] = ' ';}i++;
    }
    printf("modified string: %d \n");
    }