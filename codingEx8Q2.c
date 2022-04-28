#include<stdio.h>
int main(){

    int n,i,j;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    float array[n];

    printf("Enter the integer for %d terms: ",n);

    for(i=0;i<n;i++)
    {
        scanf("%f",&array[i]);
    }
    for(i=0;i<n;i++)
        {

            for(j=0;j<n-1;j++)
                { 
                    if(array[j]<array[j+1])
                    {
                    float high = array[j];
                    array[j] = array[j+1];
                    array[j+1] = high; 
                    }

                }

        
        }
    for(i=0;i<n;i++){

      printf("%.3f ", array[i]);

    }

    return 0;
}