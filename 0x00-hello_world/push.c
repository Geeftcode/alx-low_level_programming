#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x, y, temp;

    printf("input value of x:\n");
    scanf("%d", &x);
    printf("input value of x:\n");
    scanf("%d", &y);
    printf("value of x before: %d", &x);
    printf("value of y before: %d", &y);
    
    temp = x;
    x = y;
    y = temp;

    printf("value of x after: %d", &x);
    printf("value of y after: %d", &y);
    return 0;

}