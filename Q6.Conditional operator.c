//Find the smallest number between two numbers using conditional operator
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);//taking input of two integers
    a<b?printf("%d is the smallest number",a):printf("%d is the smallest number",b);
    return 0;
}
