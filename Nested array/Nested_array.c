#include<stdio.h>
int main(){

    int i,j,n;
    n = 6;
    int number[] = {1,3,52,55,3,2};
    
     for(i=0;i<n;i++){

        for(j=0;j<n-i-1;j++){

            if(number[j]>number[j+1]){
                int temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp; 
        }

        }
    
    }
    for(i = 0;i<n;i++){
    printf("%d ", number[i]);
    }
    return 0;
}