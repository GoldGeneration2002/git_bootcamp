#include<stdio.h>
#include<string.h>
int main(){

    char name[100];
    printf("Enter the word:");
    fgets(name,100,stdin);
    int n = strlen(name) - 1;
    int i;
    int is_palindrome = 1;
    for(i =0;i<n; i++){
        if(name[i]!= name[n-1-i]){
            printf("The word is not palidrome\n");
            is_palindrome =0;
            break;
        }
        
    }
    if(is_palindrome){
        printf("The word is a palindrome");
    }

    


    return 0;
}