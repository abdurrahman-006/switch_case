#include<stdio.h>

int main()
{
    int a, b, result;
    char ch;
    printf("input a operator and two numbers: ");
    scanf("%c %d %d", &ch, &a, &b);

    switch(ch)
    {
        case'+':
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case'-':
            printf("Result: %d\n", a - b);
            break;
        case'*': 
            printf("Result: %d\n", a * b);
            break;
        case'/': 
            if(b != 0){
                printf("Result: %d\n", a / b);
            }
            else{
                printf("error: divison by zero.\n");
            }
            break;
        case'%':
            if(b != 0){
                printf("Result: %d\n", a % b);
            }
            else{
                printf("error: division by zero.\n");
            }
            break;
    }
    return 0;
}