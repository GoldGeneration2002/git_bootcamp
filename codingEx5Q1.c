#include <stdio.h>
int main(){

    int year,month,day;
    printf("Date of Issue(YYYY/MM/DD: ");
    scanf("%d/%d/%d",&year,&month,&day);

    printf("The document has been issued on %d",day);
    switch (day)
    {
    case 1:
    case 21:
    case 31:
        printf("st");
        break;
    case 2:
    case 22:
    case 32:
        printf("nd");
    case 3:
    case 23:
        printf("rd");
    
    default:
        printf("th");
        break;
    }
    printf(" day of ");
    switch (month){
    case 1:
        printf("Janauary");
        break;
    case 2: 
        printf("Feburary");
        break;
    case 3: 
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7: 
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
    printf("Invalid month.\n");
        break;
    }
    printf(", %d\n",year);
    return 0;
}