#include<stdio.h>
#include<string.h>
int main(){
    char number[] = "Welcome home";
    char number2[100];

    int j = strlen(number);
    strcpy(number2,number);
    fputs(number2,stdout);
        return 0;
}