#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f %f", &a,&b);
    printf("%.2f", ((a-b)/a)*100);
}