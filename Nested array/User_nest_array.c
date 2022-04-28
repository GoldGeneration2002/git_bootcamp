#include<stdio.h>
#include<string.h>
int main(){

    int i,j,n;

    printf("Enter numbers to be bubble sorted: ");
    scanf("%d",&n);
    int number[n];

    printf("Enter an array of %d integers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }

    for(i=0;i<n;i++){

        for(j=0;j<n-i-1;j++){

            if(number[j]<number[j+1]){

                //for swaping
            int temp = number[j];
            number[j]= number[j+1];
            number[j+1] = temp;

            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",number[i]);
    }
    return 0;
}