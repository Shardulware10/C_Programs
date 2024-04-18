#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two no");
    scanf("%d %d",&a,&b);
    
    if (a > b) {
        printf("a (%d) is Greater than b (%d)\n", a, b);
    }
    if (a < b) {
        printf("a (%d) is less than b (%d)\n", a, b);
    }
    if (a >= b) {
        printf("a (%d) is Greaterthan equalsto b (%d)\n", a, b);
    }
    if (a <= b) {
        printf("a (%d) is less than equalsto b (%d)\n", a, b);
    }
    if (a != b) {
        printf("a (%d) is not equal to b (%d)\n", a, b);
    }
    if (a == b) {
        printf("a (%d) is equal to b (%d)\n", a, b);
    }
    
    }
        