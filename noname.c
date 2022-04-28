#include<stdio.h>
int main(){
    int i,j,k,n=1;
    int num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    int spc = num + 4 - 1;
    for(i=1;i<=num;i++){

        for(k=spc;k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
                printf("%d ",n++);
        }
        printf("\n");
        spc--;
    }
    
return 0;
}