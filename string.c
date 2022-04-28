#include<stdio.h>
int main(){
    char name[100];
    printf("Enter the sentence: ");
    fgets(name, 50, stdin);

    name[0] = (name[0]>= 97 && name[0]<= 122) ? name[0] - 32:name[0];
    fputs(name,stdout);
    return 0;
}