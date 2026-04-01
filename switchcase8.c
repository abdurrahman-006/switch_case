#include<stdio.h>

int main(){
    int units;
    double bill;
    printf("input units: ");
    scanf("%d", &units);

    switch(units <= 100){
        case 1:
            bill = 100 * 5;
            break;
        case 0:
            switch(units <= 300){
                case 1: 
                    bill = 100 * 5 + ((units - 100) * 7);
                    break;
                case 0: 
                    bill = 100 * 5 + 200 * 7 + ((units - 300) * 10);
                    break; 
            }
        break;
    }
    printf("total bill is : %.2lf TK", bill);
    return 0;
}