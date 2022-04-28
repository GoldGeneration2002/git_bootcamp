#include<stdio.h>
#include<string.h>
int main(){
    char name[101];
    char result[100];
    
    
    
    printf("Enter the name :");
    fgets(name,100,stdin);
    for(int i=0;i<100;i++){
        result[i] = name[i]>='a' &&  name[i]<='z'? name[i]-32 : name[i];
    }
    puts(result);
    int n = strlen(name);
    printf("The number of character is %d\n",n);
    
    char bish[100] = "Mname";
    char bish1[100] = "Myname";
    int no = strcmp(bish,bish1);
    printf("Difference = %d\n",no);
    
    return 0;
}