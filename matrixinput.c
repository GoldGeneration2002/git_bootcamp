#include<stdio.h>
int main(){
    int matA[10][10];
    int matB[10][10];
    int matC[10][10];
    int i,j,k;
    int n1,n2,n3,n4;
    printf("Enter the number of rows and column in matrix A: ");
    scanf("%d %d",&n1,&n2);
    printf("Enter the number of rows and column in matrix B: \n");
    scanf("%d %d",&n3,&n4);

    printf("Enter the number of elements in matrix A: \n");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&matA[i][j]);
        }
    }

    printf("Enter the number of elements in matrix B: \n");
    for(i=0;i<n3;i++){
        for(j=0;j<n4;j++){
            scanf("%d",&matB[i][j]);
        }
    }

    // for multiplication

    for(i=0;i<n1;i++){
        for(j=0;j<n4;j++){
            int sum = 0;
            for(k=0;k<n2;k++){
                sum += matA[i][k]*matB[k][j];
            }
            matC[i][j] = sum;
        }
    }
    //for printing the resultant matrix;

    for(i=0;i<n1;i++){
        for(j=0;j<n4;j++){
            
            printf("%d\t", matC[i][j]);
        }
        printf("\n");
    }
    return 0;

    
}