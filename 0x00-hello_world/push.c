#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x, y, temp;

    printf("input value of x:\n");
    scanf("%d", &x);
    printf("input value of y:\n");
    scanf("%d", &y);
    printf("value of x before: %d\n", x);
    printf("value of y before: %d\n", y);
    
    temp = x;
    x = y;
    y = temp;

    printf("value of x after: %d\n", x);
    printf("value of y after: %d\n", y);
    return 0;

}