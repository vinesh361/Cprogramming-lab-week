#include<stdio.h>
int main()
{
    int a,b,c;
    float x;
    printf("\n Enter a value : ");
    scanf("%d",&a);
    printf("\n Enter b value : ");
    scanf("%d",&b);
    c=a+b;
    printf("\nTotal : %d",c);
    c=a-b;
    printf("\nDifference : %d",c);
    c=a*b;
    printf("\nMul : %d",c);
    x=(float)a/(float)b;
    printf("\nDiv : %0.2f",x);
    c=a%b;
    printf("\nMod : %d",c);
    return 0;
}
