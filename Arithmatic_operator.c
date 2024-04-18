#include<stdio.h>

void main()
{
    int no1,no2,add,sub,mul,div,mod;
    
    printf("enter two no");
    scanf("%d %d",&no1,&no2);
    add= no1+no2;
    printf("%d\n",add);
    sub= no1-no2;
    printf("%d\n",sub);
    mul= no1*no2;
    printf("%d\n",mul);
    div= no1/no2;
    printf("%d\n",div);
    mod= no1%no2;
    printf("%d\n",mod);
}