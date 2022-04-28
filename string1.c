//changing sentence into capital.
#include<stdio.h>
int main(){

    char name[100];
    printf("Enter the sentence: ");
    fgets(name,100,stdin);
    for(int i=0;i<100;i++){
    
        name[i]= (name[i]>='a' && name[i]<='z') ? name[i] - 32: name[i];
    }
    puts(name);
    return 0;
}