#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,hypo;
    scanf("%f%f",&a,&b);
    hypo=sqrt((a*a)+(b*b));
    printf("%.2f",hypo);
}