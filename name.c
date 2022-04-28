#include<stdio.h>
#include<stdlib.h>
int main(){
    
    char word;
    printf("Enter a number or character: ");
    word = getchar();
    
    if((word>='A'&& word<='z')|| (word>= '0' && word<='9')){
        printf("%c is alphanumeric.\n",word);
    
    }
    else printf("%c is not alphanumeric.\n",word);
    return 0;

}