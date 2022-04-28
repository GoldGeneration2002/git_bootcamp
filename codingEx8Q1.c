#include<stdio.h>
#include<string.h>
int main(){

    int n,i,j;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d number of integer: ",n);

    for(i=0;i<n;i++){
        scanf("%d", &array[i]);
        }
    
    for(i=0;i<n;i++){
 
        int num = array[i];
        int is_prime = 1;

        // Check if number is prime.
        for(j=2; j < num-1 ; j++){
        
            if ( num % j == 0 )
            {
            is_prime = 0;
            break;
            }
        } 
    
        if(is_prime)
        printf("%d is prime.\n",num);
        else 
        printf("%d is not prime.\n",num);
        
    }
return 0;
}
