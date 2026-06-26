#include<stdio.h>

int main(){
    int year;
    printf("Input a Year: ");
    scanf("%d", &year);

    switch((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)){
        case 1:
                printf("leapyear");
                break;
        case 0:
                printf("not a leapyear");
                break;
    }
    return 0;
}