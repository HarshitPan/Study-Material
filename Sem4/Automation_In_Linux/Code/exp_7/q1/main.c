#include "add.c"
#include "sub.c"
#include "div.c"
#include "mul.c"
#include "mod.c"
#include<stdio.h>

int main()
{
    int a,b;
    
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice -:\n");
    int choice;
    scanf("%d",&choice);
    printf("Enter number 1 ->");
    scanf("%d",&a);
    printf("Enter number 2 ->");
    scanf("%d",&b);
    switch(choice)
    {
        case 1:
            printf("%d",add(a,b));
            break;
        case 2:
            printf("%d",sub(a,b));
            break;
        case 3:
            printf("%d",mul(a,b));
            break;
        case 4:
            printf("%d",div(a,b));
            break;
        case 5:
            printf("%d",mod(a,b));
            break;
        default:
            printf("Wrong Choice...");
    }
    return 0;
}