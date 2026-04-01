#include<stdio.h>

int main()
{
    char c;
    printf("Input a alphabet: ");
    scanf("%c", &c);

    switch(c)
    {
        case 'a': 
        case 'A': 
        case 'e': 
        case 'E': 
        case 'i': 
        case 'I': 
        case 'o': 
        case 'O': 
        case 'u': 
        case 'U':
            printf("This is vowel.\n");
            break;
        default: 
            printf("This is consonant.\n");
    }
    return 0;
}